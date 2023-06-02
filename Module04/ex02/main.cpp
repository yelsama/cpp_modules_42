#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *a = new Cat();
	a->makeSound();
	Dog orig;
	Dog a_copy(orig);
	// a->getType();
	delete a;
	// Animal b;
	// b.makeSound();
	return 0;
}
