#include "Zombie.hpp"

int	main()
{
	int nb = 3;

	Zombie*	zombie = zombieHorde(nb, "Foo");
	for(int i = 0; i < nb; i++)
		zombie[i].announce();
	delete[] zombie;

	return 0;
}
