# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2024/11/01 12:01:07 by aben-chr          #+#    #+#             #
#   Updated: 2025/08/22 23:48:12 by aben-chr         ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = ClapTrap.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	$(RM) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
