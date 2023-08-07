#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();

		Contact	getContact(int index);

		private:
		Contact _contact[8];

};

void	addContact(PhoneBook& PhoneBook, int index);
void	searchContact(PhoneBook PhoneBook, int number);

#endif
