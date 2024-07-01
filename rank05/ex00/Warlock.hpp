#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <exception>

class Warlock 
{
	private:
	std::string _name;
	std::string _title;

    Warlock(const Warlock& other);
    Warlock& operator=(const Warlock& other);

	public:
    Warlock(std::string name, std::string title);
    ~Warlock();


	const std::string	&getName() const;
	const std::string	&getTitle() const;
	void	setTitle(const std::string &title);
};

