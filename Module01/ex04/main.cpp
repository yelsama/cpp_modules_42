#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout<<"not suitable arguments\n";
		return 1;
	}
	
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream	infile(filename);
	if (!infile.is_open())
	{
		std::cout<<"Error opening file\n";
		return 1;
	}

	std::ofstream	outfile;
	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
	{
		infile.close();
		std::cout<<"Error creating file\n";
		return 1;
	}

	std::string	line;
	std::string	tmp;
	std::string	new_line;
	int	line_num = 0;
	unsigned long pos;
	unsigned long	s1_len = s1.length();
	unsigned long	lower_edge;
	while (getline(infile, line))
	{
		if (line_num)
			outfile<<"\n";
		pos = 0;
		lower_edge = 0;
		new_line.clear();
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			tmp = line.substr(lower_edge, pos);
			new_line.append(tmp);
			new_line.append(s2);
			pos += s1_len;
			lower_edge = pos;
		}
		tmp = line.substr(lower_edge);
		new_line.append(tmp);
		outfile<<new_line;
		line_num++;
	}
	infile.close();
	outfile.close();
	return 0;
}
