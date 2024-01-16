#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& src);
		~WrongAnimal(void);

		WrongAnimal& operator=(const WrongAnimal& src);

		void makeSound() const;
		std::string getType(void) const;

		protected:
			std::string _type;
};

#endif
