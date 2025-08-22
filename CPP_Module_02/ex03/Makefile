# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/21 03:05:44 by aben-chr          #+#    #+#              #
#    Updated: 2025/08/21 03:07:28 by aben-chr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Fixed.cpp Point.cpp bsp.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

HEADERS = Fixed.hpp Point.hpp

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	rm -f $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
