#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& src) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

void Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return this->_ideas[index];
}

Brain& Brain::operator=(const Brain& src) {
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &src) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = src._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}
