NAME = mrZ

SOURCES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp \

OBJECTS = $(SOURCES:%.cpp=%.o)

CC = C++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):$(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME) $(BNAME)

re: fclean all

test: all
	./$(NAME)