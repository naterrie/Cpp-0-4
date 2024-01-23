#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &copy);
		~Cure();

		Cure	&operator=(const Cure &copy);

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif