#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	*this = copy;
}

Cure::~Cure()
{
}

Cure	&Cure::operator=(const Cure &copy)
{
	this->_type = copy._type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
