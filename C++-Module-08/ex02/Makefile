Name=MutantStack
CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=  main.cpp 
OBJS=$(SRCS:.cpp=.o)
INCLUDES= MutantStack.hpp


all: $(Name)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CPPFLAGS) -c $< -o $@

$(Name): $(OBJS)
	$(CC) -o $(Name) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(Name)

re: fclean all
.PHONY: all clean fclean re