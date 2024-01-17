#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal& src)
{
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Brain* Animal::getBrain(void) const
{
	return NULL;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}
