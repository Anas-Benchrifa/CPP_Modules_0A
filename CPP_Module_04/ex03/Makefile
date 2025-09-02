NAME = Interface

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJDIR = obj

FILES = main AMateria Ice Cure Character MateriaSource

SRC = $(FILES:=.cpp)
OBJ = $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	$(RM) $(OBJ)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

leaks: $(NAME)
	leaks --atExit -- ./$(NAME)

run: $(NAME)
	clear
	./$(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

