#include "phonebook.hpp"

void	add_contact(PhoneBook *phone_book)
{
	Contact	newContact;
	std::string addline;

	while (newContact.firstName.empty())
	{
		std::cout << "what are you waiting for ? what's the first name?" << std::endl;
		std::getline(std::cin, newContact.firstName);
	}
	while(newContact.lastName.empty())
	{
		std::cout << "What about the last name?" << std::endl;
		std::getline(std::cin, newContact.lastName);
	}
	while(newContact.nickName.empty())
	{
		std::cout << "Nickname now" << std::endl;
		std::getline(std::cin, newContact.nickName);
	}
	while(newContact.phoneNumber.empty())
	{
		std::cout << "Your 06'" << std::endl;
		std::getline(std::cin, newContact.phoneNumber);
	}
	while(newContact.darkestSecret.empty())
	{
		std::cout << "Your.... darkest secret." << std::endl;
		std::getline(std::cin, newContact.darkestSecret);
	}
	std::cout << "Am proud of you...  just kidding" << std::endl;
	phone_book->addContact(newContact);
}

int	main()
{
	PhoneBook phone_book;
	std::string line;
	std::cout << "Ok choom, you ain't got many choices. It be either 'ADD' 'SEARCH' or 'EXIT'." << std::endl;
	while (1)
	{
		std::getline(std::cin, line);
		 // Reads a line from stdin until a newline is encountered
		if (line.compare(0, 3, "ADD") == 0)
		{
			add_contact(&phone_book);
		}
		if (line.compare(0, 6, "SEARCH") == 0)
		{
			phone_book.display();
		}
		if (line.compare(0, 5, "EXIT") == 0)
		{
			break;
		}
		else
		{
			std::cout << "I said it either be 'ADD' 'SEARCH' or 'EXIT', you blind ?!" << std::endl;
		}
	}
	return (0);
}