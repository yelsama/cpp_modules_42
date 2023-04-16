#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain main constructor called\n\n";
}

Brain::Brain(const Brain &other)
{
	std::cout<<"Brain Copy constructor called\n\n";
	int i = -1;
	while (++i < 100)
		this->ideas[i] = other.ideas[i];
}

Brain::~Brain()
{
	std::cout<<"Brain Destructor called\n\n";
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout<<"Brain Assign operator called\n\n";
	int i = -1;
	if (this != &other)
		while (++i < 100)
			this->ideas[i] = other.ideas[i];
	return *this;
}
