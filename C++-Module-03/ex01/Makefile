Name=Trap
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS= main.cpp  ClapTrap.cpp ScavTrap.cpp
OBJS=$(SRCS:.cpp=.o)
INCLUDES=ClapTrap.hpp  ScavTrap.hpp

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