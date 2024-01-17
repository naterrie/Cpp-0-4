#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(const AAnimal& src);
		virtual ~AAnimal(void);

		AAnimal& operator=(const AAnimal& src);

		virtual void makeSound() const = 0;
		virtual Brain *getBrain(void) const = 0;
		std::string getType(void) const;

	protected:
			std::string _type;
};

#endif
