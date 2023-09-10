# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 15:31:17 by mlektaib          #+#    #+#              #
#    Updated: 2023/09/10 15:31:18 by mlektaib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Zombie
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS= main.cpp  Zombie.cpp zombieHorde.cpp
OBJS=$(SRCS:.cpp=.o)
INCLUDES=Zombie.hpp

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