#include "Zombie.hpp"

int main()
{
	Zombie*	zombie = newZombie("Foo");

	zombie->announce();
	delete zombie;

	randomChump("lish");

	return 0;
}
