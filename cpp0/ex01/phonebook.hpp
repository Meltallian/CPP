#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

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
	Contact contacts[8];
	size_t currentContactCount;

	public:

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
	void	display()
	{
		std::cout << "index     |first name|last name |nickname  " << std::endl;
		for (size_t i = 0; i < currentContactCount; i++)
		{
			std::cout << std::setw(10) << std::left << i 
				<< "|" << std::setw(10) << std::left << contacts[i].firstName 
				<< "|" << std::setw(10) << std::left << contacts[i].lastName
				<< "|" << std::setw(10) << std::left << contacts[i].nickName 
				<< std::endl;
		}
	}
};