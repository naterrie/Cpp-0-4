#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon
{
	public:
		Weapon(void);
		~Weapon(void);

		std::string	getType(void);
		void		setType(std::string type);

	private:
		std::string	_type;
};

#endif
