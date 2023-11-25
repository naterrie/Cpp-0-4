#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	PhoneBook;

	std::cout << "Phonebook is ready to use." << std::endl;
	while (1)
	{
		std::cout << "Please enter a command: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 1;
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			PhoneBook.addContact();
		else if (input == "SEARCH")
			PhoneBook.searchContact();
	}
	return 0;
}
