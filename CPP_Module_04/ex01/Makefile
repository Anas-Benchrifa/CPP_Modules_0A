# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/29 15:41:49 by aben-chr          #+#    #+#              #
#    Updated: 2025/08/30 12:36:42 by aben-chr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp


CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	$(RM) $(OBJ)
		
run: $(NAME)
	@clear
	./$(NAME)
		
leaks: $(NAME)
	leaks --atExit -- ./$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re run leaks