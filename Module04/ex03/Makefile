NAME = ex03

SOURCES = main.cpp AMateria.cpp Ice.cpp Cure.cpp \
			Character.cpp MateriaSource.cpp \

OBJECTS = $(SOURCES:%.cpp=%.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):$(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test: all
	./$(NAME)