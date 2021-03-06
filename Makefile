#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/06 09:56:41 by sdurr             #+#    #+#              #
#    Updated: 2015/03/07 10:57:35 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= ft_minishell1

SRC			= main.c \
				ft_sh1.c \
				ft_modif_env.c \
				ft_shell_up.c \
				ft_shell_down.c \
				ft_env_home.c \
				user.c \
				test_space.c \
				ft_av.c \
				ft_cd.c \
				ft_access.c \
				commande_sys.c \
				commande_not_found.c \
				commande_unsys.c \
				test_commande.c \
				child.c \
				split_path.c \
				ft_getenv.c \
				ft_gethome.c \
				ft_set_env.c \
				ft_unset_env.c \

OBJ			= $(SRC:.c=.o)

CC			= gcc

LIBFT		= libft/libft.a

export CFLAGS		= -Wall -Wextra -Werror

HPATH		= -I libft/includes

RM			= rm -rf

$(NAME)	:		$(LIBFT) $(OBJ)
					$(CC) -o $(NAME) $(OBJ) -L libft/ -lft

$(LIBFT) :
						Make -C libft/

clean	:
				$(RM) $(OBJ)
					Make -C libft/ fclean

all		:		$(NAME)

fclean	:		clean
					$(RM) $(NAME)

re		:		fclean all

.c.o	:
					$(CC) $(CFLAGS) $(HPATH) -c $(SRC)
