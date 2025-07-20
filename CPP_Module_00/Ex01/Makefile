# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 05:57:08 by aben-chr          #+#    #+#              #
#    Updated: 2025/07/20 06:16:35 by aben-chr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main \
		PhoneBook \
		Contact \
		
F_HEADERS = PhoneBook \
		Contact \

SRC = ${FILES:=.cpp}
OBJS = ${FILES:=.o}
HEADERS = ${F_HEADERS:=.hpp}

#Colors:
BLACK   	= 	\e[30m
PINK 		=	\e[38;2;255;0;128m
BLUE		=	\e[38;2;0;128;255m
RESET		=	\e[0m

all : $(NAME)

$(NAME) : $(OBJS) $(HEADERS)
	@printf "$(BLACK) 	- Compiling $(NAME) ... $(RESET)\n"
	@$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
	@printf "$(PINK)    - You Program Is Ready To Run, Have a Good Trip -\n$(RESET)"

%.o: %.cpp $(HEADER)
	@printf "$(BLACK) 	- Making object file $(notdir $@) from source file $(notdir $<): OK! $(RESET)\n"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@ $(RM) $(OBJ)
	@printf "$(BLACK)	- Removing object files ... $(RESET)\n"
	@printf "$(PINK)    - Object files removed.$(RESET)\n"

fclean: clean
	@ $(RM) $(NAME)
	@printf "$(BLACK)	- Removing $(NAME) ... $(RESET)\n"
	@printf "$(PINK)    - Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re