#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc == 1)
	{
		std::cout<<"[it is silent Harl today]\n";
		return 0;
	}

	if (argc > 2)
	{
		std::cout<<"[talkertave Harl tody, cat not pay attenstion]\n";
		return 0;
	}
	harl.complain(argv[1]);
	return (0);
}
