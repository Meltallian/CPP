#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : std::multimap<std::string, double>()
{
}

BitcoinExchange::~BitcoinExchange() 
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : std::multimap<std::string, double>()
{
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) 
{
    if (this != &other)
	{
		*this = other;
	}
    return *this;
}
