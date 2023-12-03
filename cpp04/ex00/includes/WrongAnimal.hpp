#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		virtual void makeSound();

		protected:
			std::string _type;
};

#endif
