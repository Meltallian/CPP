#include "BitcoinExchange.hpp"



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
		
		BitcoinExchange	*Coin = new BitcoinExchange;
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
				Coin->insert(std::make_pair(date, value));
    	}
		for (BitcoinExchange::iterator it = Coin->begin(); it != Coin->end(); ++it) {
        std::cout << "Date: " << it->first << ", Value: " << it->second << std::endl;
    	}
	}
	else
	{
		std::cerr << "Error: file not found." << std::endl;
	}
	return 0;
}