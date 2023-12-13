#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound()
{
	std::cout << "NEEKO IS THE BEST DECISION" << std::endl;
}
