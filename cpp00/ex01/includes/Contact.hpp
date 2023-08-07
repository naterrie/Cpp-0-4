#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include "PhoneBook.hpp"

class	Contact {

	public:
		Contact(void);
		~Contact(void);

		void		addContact(std::string str, int index);
		std::string	getData(int index);

	private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif
