#include <iostream>
#include <fstream>
#include <sstream>

int	main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout<<"not suitable arguments\n";
		return 1;
	}

	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
	{
		std::cout<<"Error opening file\n";
		return 1;
	}
	std::ostringstream	buffer;
	buffer<<infile.rdbuf();
	std::string contetns = buffer.str();
	infile.close();

	std::ofstream	outfile;
	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
	{
		std::cout<<"Error creating file\n";
		return 1;
	}

	std::string	tmp;
	std::string	new_contents;
	unsigned long pos = 0;
	unsigned long	s1_len = std::strlen(argv[2]);
	unsigned long	lower_edge = 0;

	while ((pos = contetns.find(argv[2], pos)) < contetns.length())
	{
		tmp = contetns.substr(lower_edge, pos - lower_edge);
		new_contents.append(tmp);
		new_contents.append(argv[3]);
		pos += s1_len;
		lower_edge = pos;
	}
	tmp = contetns.substr(lower_edge);
	new_contents.append(tmp);
	outfile<<new_contents;
	outfile.close();
	return 0;
}
