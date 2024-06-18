#pragma once

#include <string>
#include <iostream>
#include <fstream> //to open files
#include <sstream> //isstringstream
#include <cmath>
#include <map>
#include <iterator>
#include <algorithm>
#include <exception>

class BitcoinExchange : public std::multimap<std::string, double>
{
	private:

	public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
};

