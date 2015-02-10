/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 09:21:54 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/10 09:49:25 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void		ft_ls(char **line, char **env, char **av)
{
	char *arg;
	int i;
	int ret;
	int j;

	ret = 1;
	av = av;
	arg = ft_strchr(*line, 's');
	arg++;
	arg++;
	i = 0;
	while (ret == 1)
	{
		j = 0;
		if (*arg == '-')
		{
			while (*arg != ' ')
			{

				av[i] = ft_strnew(15);
				av[i][j] = *arg;
				arg++;
			}
			arg++;
		}
		else
		ret = 0;
		ft_putstr(av[i]);
		ft_putchar ('\n');
		i++;
	}
	av[i] = NULL;
	if (*arg != '\0' && *arg != '-')
	{
		chdir("~");
		chdir(arg);
	}
	execve("/bin/ls", av, env);
}
