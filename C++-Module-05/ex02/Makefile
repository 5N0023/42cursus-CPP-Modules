Name=Bureaucrat
CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=  main.cpp Bureaucrat.cpp  AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
INCLUDES= Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

OBJS=$(SRCS:.cpp=.o)


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