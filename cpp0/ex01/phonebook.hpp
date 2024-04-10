#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>

class Contact 
{
	public:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
};

class PhoneBook 
{
	private:
	size_t currentContactCount;

	public:
	Contact contacts[8];
	PhoneBook() : currentContactCount(0) {} //constructor to initialize cCC
	void	addContact(const Contact& newContact)
	{
		if (currentContactCount == 8)
		{
			for (int i = 1; i < 8; i++)
				contacts[i - 1] = contacts[i];
			currentContactCount--;
		}
		contacts[currentContactCount] = newContact;
		currentContactCount++;
	}
	std::string	truncator(const std::string& str, size_t max)
	{
		if (str.length() > max)
		{
			return (str.substr(0, max - 1) + ".");
		}
		return (str);
	}
	void	display()
	{
		std::cout << "     index|first name| last name|  nickname" << std::endl;
		for (size_t i = 0; i < currentContactCount; i++)
		{
			std::cout << std::setw(10) << std::right << i 
				<< "|" << std::setw(10) << std::right << truncator(contacts[i].firstName, 10)
				<< "|" << std::setw(10) << std::right << truncator(contacts[i].lastName, 10)
				<< "|" << std::setw(10) << std::right << truncator(contacts[i].nickName, 10)
				<< std::endl;
		}
	}
};