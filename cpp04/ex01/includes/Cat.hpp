#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat& src);

		Cat& operator=(const Cat& src);

		void makeSound() const;
	private:
		Brain *_brain;
};

#endif
