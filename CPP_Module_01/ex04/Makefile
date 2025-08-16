# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/15 23:36:30 by aben-chr          #+#    #+#              #
#    Updated: 2025/08/15 23:55:09 by aben-chr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SedIsForLosers

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

# Specific files to remove (add your files here)
TEST_FILES = *.txt
REPLACE_FILES = *.replace

all: $(NAME)

$(NAME): $(OBJS)
	clang++ -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_FILES)
	rm -f $(REPLACE_FILES)

re: fclean all

.PHONY: all clean fclean re