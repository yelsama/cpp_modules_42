#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
protected:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &other);
	virtual ~Brain();
	Brain &operator=(const Brain &other);
	void	setIdea(int index, std::string idea);
	std::string	getIdea(int index) const;
};

#endif