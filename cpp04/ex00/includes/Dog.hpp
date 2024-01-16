#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog& src);

		Dog& operator=(const Dog& src);

		void makeSound() const;
};

#endif
