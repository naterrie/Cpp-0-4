#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact();

		private:
		Contact _contact[8];
		int		_index;
		int		_nbindex;
};

#endif
