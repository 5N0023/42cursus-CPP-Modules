Name=AMateria
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=  main.cpp  AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp 
OBJS=$(SRCS:.cpp=.o)
INCLUDES= AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp


all: $(Name)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

$(Name): $(OBJS)
	$(CC) $(CFLAGS) -o $(Name) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(Name)

re: fclean all
.PHONY: all clean fclean re