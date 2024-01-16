#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	public:
		Brain(void);
		Brain(const Brain& src);
		~Brain(void);

		Brain& operator=(const Brain& src);

		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);

	private:
		std::string _ideas[100];
};

#endif
