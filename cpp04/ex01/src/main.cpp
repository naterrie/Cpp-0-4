#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new WrongCat();
	std::cout << "WrongCat :" <<  wrong->getType() << " " << std::endl;
	std::cout << "Dog :" <<  j->getType() << " " << std::endl;
	std::cout << "Cat :" << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	wrong->makeSound();
	j->getBrain()->setIdea(0, "Dog idea");
	i->getBrain()->setIdea(0, "Cat idea");
	std::cout << "Dog idea: " << j->getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat idea: " << i->getBrain()->getIdea(0) << std::endl;
	delete i;
	delete j;
	delete meta;
	delete wrong;
	return 0;
}
