#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
std::cout<<"######################################################################\n";
// Animal *k;
Cat	m;
// k = &m;
// k->makeSound();
Cat	s;
s = m;
return 0;
}