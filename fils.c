/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fils.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:30:55 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/12 15:30:12 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_sh1.h"

int		fils(char **line, char **av, char **env, char *path)
{
	char	*test;
	int		i;
	int		j;

	j = 0;
	i = 0;
	test = ft_strnew(ft_strlen(*line));
	while (line[0][j] != ' ')
		test[i++] = line[0][j++];
	path = ft_strjoin(path, "/");
	path = ft_strjoin(path, test);
	av = ft_av(line);
	execve(path, av, env);
	return (-1);
}
