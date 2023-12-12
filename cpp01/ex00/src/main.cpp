#include "Zombie.hpp"

int main()
{
	Zombie*	zombie = newZombie("Foo");

	zombie->announce();
	randomChump("lish");
	delete zombie;
	return 0;
}
