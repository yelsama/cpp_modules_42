#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	Zombie(std::string str);
	void	setName(std::string name);
	void	announce(void);
};

#endif