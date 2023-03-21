#include "Contact.hpp"

Contact::Contact(/* args */)
{
	first_name = "          ";
	last_name = "          ";
	nickname = "          ";
	phone_number = "          ";
}

Contact::~Contact()
{
}

void	Contact::set_first_name(std::string str)
{
	first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	nickname = str;
}

void	Contact::set_phone_number(std::string str)
{
	phone_number = str;
}

std::string	Contact::get_first_name()
{
	return(first_name);
}

std::string	Contact::get_last_name()
{
	return (last_name);
}

std::string	Contact::get_nickname()
{
	return (nickname);
}

std::string Contact::get_phone_number()
{
	return (phone_number);
}