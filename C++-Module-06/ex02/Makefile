Name=Identify
CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=  main.cpp Base.cpp A.cpp B.cpp C.cpp utils.cpp
OBJS=$(SRCS:.cpp=.o)
INCLUDES= Base.hpp A.hpp B.hpp C.hpp utils.hpp


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