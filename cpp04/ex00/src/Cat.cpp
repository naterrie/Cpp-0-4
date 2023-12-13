#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()
{
	std::cout << "Meeeeooooooooooooooooooooooooooooooooooooooooooooooow" << std::endl;
}
