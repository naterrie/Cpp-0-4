#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	public:
		Animal(void);
		~Animal(void);
		virtual void makeSound();

		protected:
			std::string _type;
};

#endif
