#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// int n = 4;
	// Animal	*animals[n];
	// for (int i = 0; i < n / 2; i++)
	// 	animals[i] = new Dog();
	// for (int i = n /2 ; i < n; i++)
	// 	animals[i] = new Cat();
	// for (int i = 0; i < n; i++)
	// 	animals[i]->makeSound();
	// for (int i = 0; i < n; i++)
	// 	delete animals[i];
	// std::cout<<"######################################################################\n";
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	// std::cout<<"######################################################################\n";
	// WrongAnimal *wa = new WrongCat();
	// wa->makeSound();
	// delete wa;
	// std::cout<<"######################################################################\n";
	// // Animal *k;
	Cat	m;
	m.setIdea(7, "I have fun\n");
	// k = &m;
	// k->makeSound();
	Cat	s;
	s = m;
	std::cout<<m.getIdea(7);
	std::cout<<s.getIdea(7);
	m.setIdea(7, "now coool\n");
	std::cout<<m.getIdea(7);
	std::cout<<s.getIdea(7);
	return 0;
}
