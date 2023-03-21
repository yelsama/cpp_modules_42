#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
private:
	int		index;
	Contact	contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void	add_contact();
	void	search_contact();
};
#endif