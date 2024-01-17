#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=(const AAnimal& src)
{
	std::cout << "AAnimal assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}


std::string AAnimal::getType(void) const
{
	return this->_type;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}
