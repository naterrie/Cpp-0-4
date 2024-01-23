#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	{
		std::cout << "----------Part 1-----------" << std::endl;
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);

		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		me->unequip(1);

		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "\n----------Part 2-----------" << std::endl;
		IMateriaSource* src = new MateriaSource();

		for (int i = 0; i < 6; i++)
			(i % 2 == 0) ? src->learnMateria(new Ice()) : src->learnMateria(new Cure());

		ICharacter* tduprez = new Character("tduprez");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		tduprez->equip(tmp);
		tmp = src->createMateria("cure");
		tduprez->equip(tmp);
		tmp = src->createMateria("ice");
		tduprez->equip(tmp);
		tmp = src->createMateria("cure");
		tduprez->equip(tmp);
		tduprez->equip(tmp);

		tduprez->unequip(1);

		tmp = src->createMateria("cure");
		tduprez->equip(tmp);

		ICharacter* theo = new Character("theo");
		for (int i = 0; i < 4; i++)
			tduprez->use(i, *theo);

		delete theo;
		delete tduprez;
		delete src;
	}
	{
		std::cout << "\n----------Part 3-----------" << std::endl;
		IMateriaSource* src = new MateriaSource();

		for (int i = 0; i < 4; i++)
			(i % 2 == 0) ? src->learnMateria(new Ice()) : src->learnMateria(new Cure());

		Character deepCopyTest("deepCopyTest");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		deepCopyTest.equip(tmp);
		tmp = src->createMateria("cure");
		deepCopyTest.equip(tmp);
		tmp = src->createMateria("ice");
		deepCopyTest.equip(tmp);
		tmp = src->createMateria("cure");
		deepCopyTest.equip(tmp);

		Character getCopy(deepCopyTest);
		Character getCopy2("getCopy2");
		getCopy2 = getCopy;
		for (int i = 0; i < 4; i++)
			deepCopyTest.unequip(i);
		for (int i = 0; i < 4; i++)
		{
			getCopy.use(i, getCopy);
			getCopy2.use(i, getCopy2);
			deepCopyTest.use(i, deepCopyTest);
		}
		delete src;
		std::cout << "cc bieng ?" << std::endl;
	}
		std::cout << "cc bieng ?" << std::endl;
	return 0;
}
