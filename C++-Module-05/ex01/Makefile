Name=Bureaucrat
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=  main.cpp Bureaucrat.cpp  Form.cpp
OBJS=$(SRCS:.cpp=.o)
INCLUDES= Bureaucrat.hppc++


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