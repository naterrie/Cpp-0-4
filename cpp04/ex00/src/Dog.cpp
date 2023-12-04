#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()
{
	std::cout << "WOUAF WOUAF" << std::endl;
}
