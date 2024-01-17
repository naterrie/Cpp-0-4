#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal {
	public:
		Animal(void);
		Animal(const Animal& src);
		virtual ~Animal(void);

		Animal& operator=(const Animal& src);

		virtual void makeSound() const;
		virtual Brain *getBrain(void) const;
		std::string getType(void) const;

	protected:
			std::string _type;
};

#endif
