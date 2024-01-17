#include "AMateria.hpp"

AMateria::AMateria(void) : _type("default")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria& AMateria::operator=(const AMateria& src)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::string const& AMateria::getType(void) const
{
	return this->_type;
}

void AMateria::setType(std::string type)
{
	this->_type = type;
}

void AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
}

unsigned int AMateria::getXP(void) const
{
	return this->_xp;
}
