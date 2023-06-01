#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*_Brain;

public:
	Cat();
	Cat(const Cat &other);
	virtual ~Cat();
	Cat	&operator=(const Cat &other);
	void	makeSound() const;
	void	setIdea(int index, std::string idea);
	std::string	getIdea(int index) const;
};

#endif