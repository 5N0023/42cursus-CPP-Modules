NAME=ClapTrap
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS= main.cpp  ClapTrap.cpp
OBJS=$(SRCS:.cpp=.o)
INCLUDES=ClapTrap.hpp

all: $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re