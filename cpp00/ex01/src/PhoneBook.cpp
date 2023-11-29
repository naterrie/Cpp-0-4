#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _index(0), _nbindex(0)
{
	std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
}

void	PhoneBook::addContact()
{
	std::string input;

	if (_index == 8)
		_index = 0;
	std::cout << "First name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	this->_contact[_index].setFirstName(input);
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	this->_contact[_index].setLastName(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	this->_contact[_index].setNickName(input);
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	this->_contact[_index].setPhoneNumber(input);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	this->_contact[_index].setDarkestSecret(input);
	_index++;
	if (_nbindex < 8)
		_nbindex++;
}

void	PhoneBook::searchContact()
{
	int i = 0;

	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	while (i < _nbindex)
	{
		std::cout << "         " << i << "|";
		if (this->_contact[i].getFirstName().length() > 10)
			std::cout << this->_contact[i].getFirstName().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_contact[i].getFirstName();
		std::cout << "|";
		if (this->_contact[i].getLastName().length() > 10)
			std::cout << this->_contact[i].getLastName().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_contact[i].getLastName();
		std::cout << "|";
		if (this->_contact[i].getNickName().length() > 10)
			std::cout << this->_contact[i].getNickName().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_contact[i].getNickName();
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter index: ";
	std::cin >> i;
	if (std::cin.eof())
		return ;
	std::cin.ignore();
	if (i < 0 || i > _nbindex - 1)
		std::cout << "Wrong index" << std::endl;
	else
	{
		std::cout << "First name: " << this->_contact[i].getFirstName() << std::endl;
		std::cout << "Last name: " << this->_contact[i].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contact[i].getNickName() << std::endl;
		std::cout << "Phone number: " << this->_contact[i].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << this->_contact[i].getDarkestSecret() << std::endl;
	}
}
