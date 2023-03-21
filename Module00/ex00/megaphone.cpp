#include <iostream>

int	main(int argc, char *argv[])
{
	int			i, n;

	i = 0;
	if (argc < 2)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	while (++i < argc)
	{
		n = -1;
		while (argv[i][++n])
			argv[i][n] = std::toupper(argv[i][n]);
		std::cout<<argv[i];
	}
	return (0);
}
