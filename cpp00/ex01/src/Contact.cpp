#include "PhoneBook.hpp"

Contact::Contact(void) {

}

Contact::~Contact(void) {

}

void Contact::addContact(std::string str, int index){
	if (index == 0)
		this->_firstName = str;
	else if (index == 1)
		this->_lastName = str;
	else if (index == 2)
		this->_nickName = str;
	else if (index == 3)
		this->_phoneNumber = str;
	else if (index == 4)
		this->_darkestSecret = str;
}

std::string Contact::getData(int index) {
		if (index == 0)
		return (this->_firstName);
	else if (index == 1)
		return (this->_lastName);
	else if (index == 2)
		return (this->_nickName);
	else if (index == 3)
		return (this->_phoneNumber);
	else if (index == 4)
		return (this->_darkestSecret);
	return ("wtf?");
}
