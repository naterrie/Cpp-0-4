#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& src): Animal(src)
{
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

Brain* Cat::getBrain(void) const
{
	return this->_brain;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meeeeooooooooooooooooooooooooooooooooooooooooooooooow" << std::endl;
}
