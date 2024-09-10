# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/08 21:23:55 by dolifero          #+#    #+#              #
#    Updated: 2024/09/10 12:36:06 by dolifero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= String
CC			= c++
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

SRC_FILES	= main.cpp
OBJ_FILES	= main.o

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

