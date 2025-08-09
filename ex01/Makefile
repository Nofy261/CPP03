# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/08 13:27:48 by nolecler          #+#    #+#              #
#    Updated: 2025/08/09 08:59:14 by nolecler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scav

CC = c++

CFLAGS = -Wall -Werror -Wextra -Iincludes -std=c++98

SRC := src/ClapTrap.cpp \
		src/ScavTrap.cpp \
		main.cpp

OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re