# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 02:21:19 by aben-chr          #+#    #+#              #
#    Updated: 2025/08/14 02:23:56 by aben-chr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

SRCS = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all