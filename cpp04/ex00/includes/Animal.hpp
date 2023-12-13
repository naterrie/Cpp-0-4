#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	public:
		Animal(void);
		Animal(const Animal& src);
		~Animal(void);
		Animal& operator=(const Animal& src);

		virtual void makeSound();
		void setType(std::string type);
		std::string getType(void) const;

	protected:
			std::string _type;
};

#endif
