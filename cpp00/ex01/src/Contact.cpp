#include "PhoneBook.hpp"

Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
}

// Get contact

std::string	Contact::getFirstName()
{
	return (this->_firstName);
}

std::string	Contact::getLastName()
{
	return (this->_lastName);
}

std::string	Contact::getNickName()
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (this->_darkestSecret);
}

//	Set Contact

void	Contact::setFirstName(std::string input)
{
	this->_firstName = input;
}

void	Contact::setLastName(std::string input)
{
	this->_lastName = input;
}

void	Contact::setNickName(std::string input)
{
	this->_nickName = input;
}

void	Contact::setPhoneNumber(std::string input)
{
	this->_phoneNumber = input;
}

void	Contact::setDarkestSecret(std::string input)
{
	this->_darkestSecret = input;
}

