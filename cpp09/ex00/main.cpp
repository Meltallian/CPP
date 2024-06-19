#include "BitcoinExchange.hpp"

bool	is_line_valid(std::string line)
{
	if (line == "date | value")
		return false;
	if (line.empty())
	{
		std::cout << "Error: line is empty" << std::endl;
		return false;		
	}
	if (!line.find('|'))
	{
		std::cout << "Error: bad input " << line << std::endl;
		return false;		
	}
	return true;
}

bool	is_value_valid(double value)
{
	if (value > 1000)
	{
		std::cout << "Error: too large a number : " << value << std::endl;
		return false;		
	}
	if (value < 0)
	{
		std::cout << "Error: not a positive number : " << value << std::endl;
		return false;		
	}
	return true;
}

bool	is_date_valid(std::string date)
{
	if (date < "2009-01-02")
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return false;
	}
	if (date.empty())
	{
		std::cout << "Error: no date." << std::endl;
		return false;
	}
	if (!date.find('-'))
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return false;		
	}
	std::istringstream iss(date);
	double	year;
	double	month;
	double	day;
    char delimiter;

    iss >> year;
    iss >> delimiter;  // Read and discard the hyphen
    iss >> month;
    iss >> delimiter; // Read and discard the hyphen
    iss >> day;

	if (month < 1 || month > 12)
	{
		std::cout << "Error: bad month input => " << date << std::endl;
		return false;			
	}
	if (day < 1 || month > 31)
	{
		std::cout << "Error: bad day input => " << date << std::endl;
		return false;			
	}
	return true;
}

void	exchange(BitcoinExchange &coin, std::fstream &infile)
{
	std::string	line;
	while (std::getline(infile, line))
	{
		if (!is_line_valid(line))
			continue;
		if (!is_date_valid(line))
			continue;
		std::istringstream iss(line);
		std::string date;
		double value;
		std::getline(iss, date, '|');
		iss >> value;
		if (!is_value_valid(value))
			continue;
   		if (iss.fail())
		{
       		std::cout << "Error: bad value syntax." << std::endl;
			continue;
		}
		BitcoinExchange::iterator it = coin.lower_bound(date);
		it--;
		double result = it->second * value;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::fstream infile;
		infile.open(av[1], std::fstream::in | std::fstream::out | std::fstream::app);
		if (!infile)
			std::cerr << "Error: could not open file." << std::endl;

		std::fstream data;
		data.open("data.csv", std::fstream::in | std::fstream::out | std::fstream::app);
		if (!data)
			std::cerr << "Error: 'data.csv' corrupted." << std::endl;
		
		BitcoinExchange	Coin;
		std::string line;
		while (std::getline(data, line)) 
		{
			//The class std::istringstream is  is used to perform input operations 
			//on strings, essentially treating a string like a stream. 
			std::istringstream iss(line);
			std::string date;
			double value;

			//This line extracts the date part of the string. 
			//When using std::getline with an istringstream and specifying a delimiter, 
			//it extracts characters from the stream up to the delimiter and 
			//advances the stream's internal pointer past the delimiter. 
			std::getline(iss, date, ',');

			//Behavior: When iss >> value is executed, the operator reads characters from 
			//the current position of the stream, skips any leading whitespace, 
			//and tries to interpret the subsequent characters as a double. 
			//The conversion and assignment are done automatically.
			iss >> value;

			// Insert into the multimap
			if (!(date.size() < 9)) //to remove first line
				Coin.insert(std::make_pair(date, value));
    	}
		// for (BitcoinExchange::iterator it = Coin.begin(); it != Coin.end(); ++it) 
       	// 	std::cout << "Date: " << it->first << ", Value: " << it->second << std::endl;
		exchange(Coin, infile);
	}
	else
	{
		std::cerr << "Error: file not found." << std::endl;
	}
	return 0;
}