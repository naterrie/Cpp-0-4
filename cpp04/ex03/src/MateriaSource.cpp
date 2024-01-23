#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break ;
		}
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	return (NULL);
}
