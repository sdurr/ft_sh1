#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/06 09:56:41 by sdurr             #+#    #+#              #
#    Updated: 2015/02/06 10:01:34 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= ft_minishell1
SRC			= main.c \
				ft_sh1.c \
OBJ			= $(SRC:.c=.o)
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
HPATH		= -I libft
RM			= rm -f
ECHO			= /bin/echo -e

$(NAME)	:		$(OBJ)
				(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean	:
				$(RM) $(OBJ)
				$(RM) *~

all		:		$(NAME)

fclean	:		clean
				$(RM) $(NAME)

re		:		fclean all

.c.o	:
				$(CC) $(CFLAGS) $(HPATH)-o $@ -c $<
