#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

}

PhoneBook::~PhoneBook(void) {

}

Contact	PhoneBook::getContact(int index) {
	return this->_contact[index];
}
