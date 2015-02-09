#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/06 09:56:41 by sdurr             #+#    #+#              #
#    Updated: 2015/02/09 09:25:05 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= ft_minishell1

SRC			= main.c \
				ft_sh1.c \
				ft_cd.c \
				commande_sys.c \
				test_commande.c \
				fils.c \
				ft_getenv.c \
				ft_set_env.c \
				ft_ls.c \

OBJ			= $(SRC:.c=.o)

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

HPATH		= -I libft/includes

RM			= rm -rf

$(NAME)	:		$(OBJ)
				$(CC) -o $(NAME) $(OBJ) -L libft/ -lft

clean	:
				$(RM) $(OBJ)
				$(RM) *~

all		:		$(NAME)

fclean	:		clean
				$(RM) $(NAME)

re		:		fclean all

.c.o	:
				$(CC) $(CFLAGS) $(HPATH) -c $(SRC)