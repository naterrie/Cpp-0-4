BLEU := \033[36m
PURPLE := \033[35m
GREEN := \033[32m
RED := \033[31m
RESET := \033[0m
ERASE := \033[2K\033[1A\r

DIR_OBJS := .objs

OBJS =	$(addprefix $(DIR_OBJS)/, $(SRCS:.cpp=.o))

NAME =	phonebook

INC_DIR =	includes
INC		=	$(addprefix $(INC_DIR)/, $(HEADERS))
HEADERS =	PhoneBook.hpp \
			Contact.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -I $(INC_DIR)

SRCS =	main.cpp \
		PhoneBook.cpp \
		Contact.cpp \
		actions.cpp

all: $(NAME)

$(NAME): $(DIR_OBJS) $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)
	echo "$(GREEN)✅ $(NAME) compilated !"

$(DIR_OBJS)/%.o: src/%.cpp $(INC) Makefile
	echo "$(GREEN)⏳ Making $(NAME)"
	printf "$(BLEU) ⮡ Making $(RESET)$@$(RED)"
	c++ $(FLAGS) -c $< -o $@ -I.
	sleep 0.05
	printf "$(ERASE)"

$(DIR_OBJS):
	mkdir -p $@

clean:
	echo "$(PURPLE)🧹Removing $(NAME).o files !"
	rm -rf $(DIR_OBJS)

fclean: clean
	echo "$(PURPLE)🧹Removing $(NAME:.a=) !"
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re all

.SILENT:
