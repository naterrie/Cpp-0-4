#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	PhoneBook;
	int	index = 0;
	int	number = 0;

	std::cout << "Phonebook is ready to use." << std::endl;
	while (1)
	{
		std::cout << "Please enter a command: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
		{
			if (index == 8)
				index = 0;
			addContact(PhoneBook, index);
			index ++;
			number++;
		}
		else if (input == "SEARCH")
			searchContact(PhoneBook, number);
	}
	return 0;
}
