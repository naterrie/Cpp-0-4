#include "PhoneBook.hpp"

void	addContact(PhoneBook& PhoneBook, int index) {
	std::string	input;

	std::cout << "First name: ";
	std::getline(std::cin, input);
	PhoneBook.getContact(index).addContact(input, 0);
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	PhoneBook.getContact(index).addContact(input, 1);
	std::cout << "NickName: ";
	std::getline(std::cin, input);
	PhoneBook.getContact(index).addContact(input, 2);
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	PhoneBook.getContact(index).addContact(input, 3);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input);
	PhoneBook.getContact(index).addContact(input, 4);
	for (int i = 0; i < 5; ++i) {
		std::cout << PhoneBook.getContact(index).getData(i) << std::endl;
	}
}

void	searchContact(PhoneBook PhoneBook, int number) {
	std::string	input;
	int			i = 0;

	while (i < number)
	{
		if (PhoneBook.getContact(i).getData(0).empty())
		{
			std::cout << "|         ";
			std::cout << PhoneBook.getContact(i).getData(0);
			std::cout << PhoneBook.getContact(i).getData(1);
			std::cout << PhoneBook.getContact(i).getData(2);
			std::cout << "|" << std::endl;
		}
		i++;
	}
	std::cout << "Wich one you want to see ?" << std::endl;
	std::getline(std::cin, input);
}
