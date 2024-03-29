#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog& src): Animal(src)
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Real dog say WOUF not Wouaf" << std::endl;
}
