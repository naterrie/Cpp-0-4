#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &rhs);
		~ScavTrap(void);

		void	attack(const std::string &target);

		void	guardGate(void);

		int		get_damage(void);
		int		get_energy(void);
		int		get_hitpoints(void);
};

#endif
