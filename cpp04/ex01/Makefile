# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 16:19:25 by naterrie          #+#    #+#              #
#    Updated: 2023/11/29 13:53:24 by naterrie         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

############################## Colors #########################################

BLEU := \033[36m
PURPLE := \033[35m
GREEN := \033[32m
RED := \033[31m
RESET := \033[0m
ERASE := \033[2K\033[1A\r

############################## Variables #######################################

DIR_OBJS := .objs

OBJS =	$(addprefix $(DIR_OBJS)/, $(SRCS:.cpp=.o))

NAME =	Animals

INC_DIR =	includes
INC		=	$(addprefix $(INC_DIR)/, $(HEADERS))
HEADERS =	Dog.hpp \
			Cat.hpp \
			Animal.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp \
			Brain.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -I $(INC_DIR)

SRCS =	main.cpp \
		Dog.cpp \
		Cat.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp

############################## Rules ##########################################

all: $(NAME)

$(NAME): $(DIR_OBJS) $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)
	echo "$(GREEN)✅ $(NAME) compilated !"

$(DIR_OBJS)/%.o: src/%.cpp $(INC) Makefile
	echo "$(GREEN)⏳ Making $(NAME)"
	printf "$(BLEU) ⮡ Making $(RESET)$@$(RED)"
	c++ $(FLAGS) -MMD -c $< -o $@
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
