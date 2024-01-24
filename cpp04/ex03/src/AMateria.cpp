#include "AMateria.hpp"


AMateria::AMateria(std::string const& type) : _type(type)
{
}

AMateria::AMateria(const AMateria& src)
{
	*this = src;
}

AMateria& AMateria::operator=(const AMateria& src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

AMateria::~AMateria(void)
{
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Use " << target.getName() << " Materia" << std::endl;
}

std::string const& AMateria::getType(void) const
{
	return this->_type;
}
