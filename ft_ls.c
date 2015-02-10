/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 08:42:06 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/10 16:50:05 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void		ft_ls(char **line, char **env, char **av)
{
	char	*arg;
	char	*path;
	int		i;
	char	*test;

	test = NULL;
	i = 0;
	arg = ft_strdup(*line);
	arg += 3;
	if (*arg == '-')
	{
		test = ft_strnew(3);
		test[0] = *arg;
		arg++;
		test[1] = *arg;
		arg += 2;
	}
	path = ft_strdup(arg);
	av[i++] = ft_strdup("ls");
	if (test != NULL)
		av[i++] = test;
	if (*arg != '\0')
	av[i++] = ft_strdup(arg);
	av[i] = NULL;
	if (*arg != '\0')
	{
		chdir("~");
		chdir(path);
	}
	execve("/bin/ls", av, env);
}
