#include "phonebook.hpp"

void	add_contact(PhoneBook *phone_book)
{
	Contact	newContact;
	std::string addline;

	while (newContact.firstName.empty())
	{
		std::cout << "what are you waiting for ? what's the first name?" << std::endl;
		if (!std::getline(std::cin, newContact.firstName))
		{
			if(std::cin.eof())
				std::cout <<"EOF encountered, exiting program. \n";
			else
				std::cout << "Input error!\n";
			exit(EXIT_FAILURE);
		}
	}
	while(newContact.lastName.empty())
	{
		std::cout << "What about the last name?" << std::endl;
		if (!std::getline(std::cin, newContact.lastName))
		{
			if(std::cin.eof())
				std::cout <<"EOF encountered, exiting program. \n";
			else
				std::cout << "Input error!\n";
			exit(EXIT_FAILURE);
		}
	}
	while(newContact.nickName.empty())
	{
		std::cout << "Nickname now" << std::endl;
		if (!std::getline(std::cin, newContact.nickName))
		{
			if(std::cin.eof())
				std::cout <<"EOF encountered, exiting program. \n";
			else
				std::cout << "Input error!\n";
			exit(EXIT_FAILURE);
		}
	}
	while(newContact.phoneNumber.empty())
	{
		std::cout << "Your 06'" << std::endl;
		if (!std::getline(std::cin, newContact.phoneNumber))
		{
			if(std::cin.eof())
				std::cout <<"EOF encountered, exiting program. \n";
			else
				std::cout << "Input error!\n";
			exit(EXIT_FAILURE);
		}
	}
	while(newContact.darkestSecret.empty())
	{
		std::cout << "Your.... darkest secret." << std::endl;
		if (!std::getline(std::cin, newContact.darkestSecret))
		{
			if(std::cin.eof())
				std::cout <<"EOF encountered, exiting program. \n";
			else
				std::cout << "Input error!\n";
			exit(EXIT_FAILURE);
		}
	}
	std::cout << "Am proud of you...  just kidding" << std::endl;
	phone_book->addContact(newContact);
}

int	index_info(PhoneBook *phone_book, std::string line)
{
	// std::cout << line << std::endl;
	while (1)
	{
		if (line == "0")
		{
			std::cout << "Fine, so here is the first name : " << phone_book->contacts[0].firstName << std::endl;
			std::cout << "Here is the last name : " << phone_book->contacts[0].lastName << std::endl;
			std::cout << "Here is the nick name : " << phone_book->contacts[0].nickName << std::endl;
			std::cout << "Here is the phone number : " << phone_book->contacts[0].phoneNumber << std::endl;
			std::cout << "And the darkest secret : " << phone_book->contacts[0].darkestSecret << std::endl;
			return (1) ;
		}
		else if (line == "1")
		{
			std::cout << "Fine, so here is the first name : " << phone_book->contacts[1].firstName << std::endl;
			std::cout << "Here is the last name : " << phone_book->contacts[1].lastName << std::endl;
			std::cout << "Here is the nick name : " << phone_book->contacts[1].nickName << std::endl;
			std::cout << "Here is the phone number : " << phone_book->contacts[1].phoneNumber << std::endl;
			std::cout << "And the darkest secret : " << phone_book->contacts[1].darkestSecret << std::endl;
			return (1) ;
		}
		else if (line == "2")
		{
			std::cout << "Fine, so here is the first name : " << phone_book->contacts[2].firstName << std::endl;
			std::cout << "Here is the last name : " << phone_book->contacts[2].lastName << std::endl;
			std::cout << "Here is the nick name : " << phone_book->contacts[2].nickName << std::endl;
			std::cout << "Here is the phone number : " << phone_book->contacts[2].phoneNumber << std::endl;
			std::cout << "And the darkest secret : " << phone_book->contacts[2].darkestSecret << std::endl;
			return (1) ;
		}
		else if (line == "3")
		{
			std::cout << "Fine, so here is the first name : " << phone_book->contacts[3].firstName << std::endl;
			std::cout << "Here is the last name : " << phone_book->contacts[3].lastName << std::endl;
			std::cout << "Here is the nick name : " << phone_book->contacts[3].nickName << std::endl;
			std::cout << "Here is the phone number : " << phone_book->contacts[3].phoneNumber << std::endl;
			std::cout << "And the darkest secret : " << phone_book->contacts[3].darkestSecret << std::endl;
			return (1) ;
		}
		else if (line == "4")
		{
			std::cout << "Fine, so here is the first name : " << phone_book->contacts[4].firstName << std::endl;
			std::cout << "Here is the last name : " << phone_book->contacts[4].lastName << std::endl;
			std::cout << "Here is the nick name : " << phone_book->contacts[4].nickName << std::endl;
			std::cout << "Here is the phone number : " << phone_book->contacts[4].phoneNumber << std::endl;
			std::cout << "And the darkest secret : " << phone_book->contacts[4].darkestSecret << std::endl;
			return (1) ;
		}
		else if (line == "5")
		{
			std::cout << "Fine, so here is the first name : " << phone_book->contacts[5].firstName << std::endl;
			std::cout << "Here is the last name : " << phone_book->contacts[5].lastName << std::endl;
			std::cout << "Here is the nick name : " << phone_book->contacts[5].nickName << std::endl;
			std::cout << "Here is the phone number : " << phone_book->contacts[5].phoneNumber << std::endl;
			std::cout << "And the darkest secret : " << phone_book->contacts[5].darkestSecret << std::endl;
			return (1) ;
		}
		else if (line == "6")
		{
			std::cout << "Fine, so here is the first name : " << phone_book->contacts[6].firstName << std::endl;
			std::cout << "Here is the last name : " << phone_book->contacts[6].lastName << std::endl;
			std::cout << "Here is the nick name : " << phone_book->contacts[6].nickName << std::endl;
			std::cout << "Here is the phone number : " << phone_book->contacts[6].phoneNumber << std::endl;
			std::cout << "And the darkest secret : " << phone_book->contacts[6].darkestSecret << std::endl;
			return (1) ;
		}
		else if (line == "7")
		{
			std::cout << "Fine, so here is the first name : " << phone_book->contacts[7].firstName << std::endl;
			std::cout << "Here is the last name : " << phone_book->contacts[7].lastName << std::endl;
			std::cout << "Here is the nick name : " << phone_book->contacts[7].nickName << std::endl;
			std::cout << "Here is the phone number : " << phone_book->contacts[7].phoneNumber << std::endl;
			std::cout << "And the darkest secret : " << phone_book->contacts[7].darkestSecret << std::endl;
			return (1) ;
		}
		else
		{
			std::cout << "Just input a correct index, I don't have unlimited time.." << std::endl;
			if (!std::getline(std::cin, line))
			{
				if(std::cin.eof())
					std::cout <<"EOF encountered, exiting program. \n";
				else
					std::cout << "Input error!\n";
				exit(EXIT_FAILURE);
			}
		}
	}
	return (0);
}

void	display_contact(PhoneBook *phone_book)
{
	std::string line;

	phone_book->display();
	while (1)
	{
		std::cout << "So here we are.. just give me the index already" << std::endl;
		if (!std::getline(std::cin, line))
		{
			if(std::cin.eof())
				std::cout <<"EOF encountered, exiting program. \n";
			else
				std::cout << "Input error!\n";
			exit(EXIT_FAILURE);
		}
		if (index_info(phone_book, line))
			break ;
	}

}

int	main()
{
	PhoneBook phone_book;
	std::string line;
	std::cout << "Ok choom, you ain't got many choices. It be either 'ADD' 'SEARCH' or 'EXIT'." << std::endl;
	while (1)
	{
		if (!std::getline(std::cin, line))
		{
			if(std::cin.eof())
				std::cout <<"EOF encountered, exiting program. \n";
			else
				std::cout << "Input error!\n";
			break ;
		}
		 // Reads a line from stdin until a newline is encountered
		if (line == "ADD")
		{
			add_contact(&phone_book);
		}
		else if (line == "SEARCH")
		{
			display_contact(&phone_book);
		}
		else if (line == "EXIT")
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