#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact()
{
	std::string	str;

	std::cout<<"ENTER FIRST NAME\n";
	std::getline(std::cin, str);
	if (std::cin.fail())
		str = "          ";
	contacts[index].set_first_name(str);
	std::cout<<"ENTER LAST NAME\n";
	std::getline(std::cin, str);
	if (std::cin.fail())
		str = "          ";
	contacts[index].set_last_name(str);
	std::cout<<"ENTER NICK NAME\n";
	std::getline(std::cin, str);
	if (std::cin.fail())
		str = "          ";
	contacts[index].set_nickname(str);
	std::cout<<"ENTER PHONE NUMBER\n";
	std::getline(std::cin, str);
	if (std::cin.fail())
		str = "          ";
	contacts[index].set_phone_number(str);
	index = (index + 1) % 8;
	std::cout<<"Done adding contact\n";
}

void	PhoneBook::search_contact()
{
	int			n, width;
	std::string	indx;

	std::cout<<std::setw(5)<<std::right<< std::setfill(' ')<<"INDEX"<<"|";
	std::cout<<std::setw(10)<<std::right<< std::setfill(' ')<<"FIRST N"<<"|";
	std::cout<<std::setw(10)<<std::right<<std::setfill(' ')<<"LAST N"<<"|";
	std::cout<<std::setw(10)<<std::right<< std::setfill(' ')<<"NICK N"<<"|";
	std::cout<<std::setw(10)<<std::right<<std::setfill(' ')<<"PNONE NO"<<"|";
	std::cout<<std::endl;
	n = -1;
	width = 10;
	while (++n < 8)
	{
		std::cout<<std::setw(5)<<std::right<<std::setfill(' ')<<n+1<<"|";
		if (contacts[n].get_first_name().length() > 10)
			std::cout<<std::setw(9)<<std::right<<std::setfill(' ')<<contacts[n].get_first_name().substr(0, 9)<<".|";
		else
			std::cout<<std::setw(10)<<std::right<<std::setfill(' ')<<contacts[n].get_first_name().substr(0, 10)<<"|";
		if (contacts[n].get_last_name().length() > 10)
			std::cout<<std::setw(9)<<std::right<<std::setfill(' ')<<contacts[n].get_last_name().substr(0, 9)<<".|";
		else
			std::cout<<std::setw(10)<<std::right<<std::setfill(' ')<<contacts[n].get_last_name().substr(0, 10)<<"|";
		if (contacts[n].get_nickname().length() > 10)
			std::cout<<std::setw(9)<<std::right<<std::setfill(' ')<<contacts[n].get_nickname().substr(0, 9)<<".|";
		else
			std::cout<<std::setw(10)<<std::right<<std::setfill(' ')<<contacts[n].get_nickname().substr(0, 10)<<"|";
		if (contacts[n].get_phone_number().length() > 10)
			std::cout<<std::setw(9)<<std::right<<std::setfill(' ')<<contacts[n].get_phone_number().substr(0, 9)<<".|";
		else
			std::cout<<std::setw(10)<<std::right<<std::setfill(' ')<<contacts[n].get_phone_number().substr(0, 10)<<"|";
		std::cout<<std::endl;
	}
	std::cout<<"CHOSE AN INDEX TO DISPLAY: ";
	std::getline(std::cin, indx);
	if (std::cin.fail() || indx[0] > '8' || indx[0] < '1' || indx[1])
	{
		std::cout<<"Not suitalbe input, ending SEARCH\n";
		return;
	}
	n = indx[0] - '0' -1;
	std::cout<<"FIRST NAME: "<<contacts[n].get_first_name()<<"\n";
	std::cout<<"LAST NAME: "<<contacts[n].get_last_name()<<"\n";
	std::cout<<"NICK NAME: "<<contacts[n].get_nickname()<<"\n";
	std::cout<<"PHONE NUMBER: "<<contacts[n].get_phone_number()<<"\n";
}
