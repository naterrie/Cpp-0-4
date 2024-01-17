#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
		unsigned int _xp;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria();

		AMateria & operator=(AMateria const & rhs);

		std::string const & getType() const;
		unsigned int getXP() const;
		void setXP(unsigned int xp);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
