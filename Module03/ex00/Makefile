NAME = ex00

SOURCES = main.cpp ClapTrap.cpp \

OBJECTS = $(SOURCES:%.cpp=%.o)

CC = C++
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