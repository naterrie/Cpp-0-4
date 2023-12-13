#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound()
{
	std::cout << "WrongAnimal sound" << std::endl;
}
