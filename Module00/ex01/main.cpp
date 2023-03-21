#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneb;

	std::string	input;

	std::cout<<"Hello, you can use one of the folowing functions:\n";
	while (true)
	{
		std::cout<<"Use: ADD, SEARCH or EXIT\n";
		std::cout<<"please enter your choice:\n";
		std::getline(std::cin, input);
		if (std::cin.fail())
		{
			std::cout<<"no entry has been detected, the Phonebook will exit!\n";
			return (0);
		}
		else if (input == "ADD")
			phoneb.add_contact();
		else if (input == "SEARCH")
			phoneb.search_contact();
		else if (input == "EXIT")
		{
			std::cout<<"getting out, see you later :)\n";
			return (0);
		}
		else
			std::cout<<"Not recoginzed\n";
		std::cout<<"##########################################################\n";
	}
	return (0);
}
