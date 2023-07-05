# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corellan <corellan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 10:37:08 by corellan          #+#    #+#              #
#    Updated: 2023/07/05 15:46:18 by corellan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutant_stack

NAME2 = mutant_stack_subject

SRC = main.cpp

SRC2 = main_subject.cpp

OBJ = $(SRC:.cpp=.o)

OBJ2 = $(SRC2:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RED = \033[0;31m

GREEN = \033[0;32m

YELLOW = \033[0;33m

NC = \033[0m

all: $(NAME)

$(NAME) : $(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN)The binary was created successfully$(NC)"

$(NAME2) : $(OBJ2)
		@$(CC) $(FLAGS) $(OBJ2) -o $(NAME2)
		@echo "$(GREEN)The binary was created successfully$(NC)"

%.o: %.cpp
		@$(CC) $(FLAGS) -I. -c $< -o $@
		@echo "$(GREEN)Object file created.$(NC)"

clean:
		@rm -f $(OBJ) $(OBJ2)
		@echo "$(RED)Object files deleted$(NC)"

fclean: clean
		@rm -rf $(NAME) $(NAME2)
		@echo "$(RED)The binary was deleted successfully$(NC)"

re: fclean all
		

