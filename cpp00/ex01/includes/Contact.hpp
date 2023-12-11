#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include "PhoneBook.hpp"

class	Contact {

	public:
		Contact(void);
		~Contact(void);

	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();

	void	setFirstName(std::string input);
	void	setLastName(std::string input);
	void	setNickName(std::string input);
	void	setPhoneNumber(std::string input);
	void	setDarkestSecret(std::string input);

	private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif
