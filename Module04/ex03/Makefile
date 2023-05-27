NAME = ex03

SOURCES = main.cpp AMateria.cpp ICharacter.cpp \

OBJECTS = $(SOURCES:%.cpp=%.o)

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):$(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test: all
	./$(NAME)