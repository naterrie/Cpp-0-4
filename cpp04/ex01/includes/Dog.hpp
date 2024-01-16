#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
#	include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog& src);

		Dog& operator=(const Dog& src);

		void makeSound() const;
	private:
		Brain *_brain;
};

#endif
