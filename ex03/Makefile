# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 16:04:03 by dolifero          #+#    #+#              #
#    Updated: 2024/09/10 16:49:22 by dolifero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Violence
CC			= c++
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

SRC_FILES	= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJ_FILES	= $(SRC_FILES:.cpp=.o)

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

