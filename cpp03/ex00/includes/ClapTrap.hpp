#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &src);
		ClapTrap &operator=(const ClapTrap &rhs);

		~ClapTrap(void);

		void	attack(const std::string &target);
		void	takeDamage(int amount);
		void	beRepaired(int amount);

		int		get_damage(void) const;
		int		get_energy(void) const;
		int		get_hitpoints(void) const;

	private:
		std::string	_name;
		int			_hitpoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
