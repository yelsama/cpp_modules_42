#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	std::string	name;
	int			grade;
	Bureaucrat(/* args */);

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat & other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();
	std::string	get_name(void) const;
	int			get_rank(void) const;
	void		set_rank(int const new_rank);
};

#endif