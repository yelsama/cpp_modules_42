#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout<<"[ DEBUG ]\n";
	std::cout<<"I love having extra bacon for my ";
	std::cout<<"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout<<"[ INFO ]\n";
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put";
	std::cout<<" enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout<<"[ WARNING ]\n";
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for";
	std::cout<<" years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout<<"[ ERROR ]\n";
	std::cout<<"This is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl()
{
	a_complain[0] = "DEBUG";
	a_complain[1] = "INFO";
	a_complain[2] = "WARNING";
	a_complain[3] = "ERROR";
}

Harl::~Harl(){}

void	Harl::complain(std::string level)
{
	int	i = -1;

	while (++i < 4)
		if (level == a_complain[i])
			break;
	switch (i)
	{
	case 0:
		this->debug();
	case 1:
		this->info();
	case 2:
		this->warning();
	case 3:
		this->error();
		break;
	default:
		std::cout<<"Hmmmmmm, You look goood!\n";
		break;
	}
}
