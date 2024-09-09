# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 18:37:45 by dolifero          #+#    #+#              #
#    Updated: 2024/09/09 23:09:29 by dolifero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombieHorde
CC			= c++
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

SRC_FILES	= Zombie.cpp zombieHorde.cpp main.cpp
OBJ_FILES	= Zombie.o zombieHorde.o main.o

all:		$(NAME)

$(NAME):	$(OBJ_FILES)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FILES)

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ_FILES)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
