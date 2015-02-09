/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 09:21:54 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/09 15:32:50 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static char	**ft_argv(char *arg)
{
	char **ret;
	int i;
	int count;
	int j;

	i = -1;
	count = 1;
	while (arg[++i])
	{
		while (arg[i] != ' ')
			i++;
		count++;
	}
	ret = (char **)malloc(sizeof(char *) * count + 1);
	i = -1;
	count = 0;
	j = 0;
	while (arg[++i])
		while (arg[++i])
		{
			while (arg[i] != ' ')
				ret[count][j++] = arg[i++];
			ret[count][i] = '\0';
			count++;
		}
	ret[count] = NULL;
	return (ret);

}

void		ft_ls(char **line, char **env, char **av)
{
	char *arg;
	char **argv;

	av = av;
	arg = ft_strchr(*line, 's');
	arg++;
	arg++;
	if (*arg != '\0' && *arg != '-')
	{
		chdir("~");
		chdir(arg);
	}
	argv = av;
	if (*arg != '\0' && *arg == '-')
		argv = ft_argv(arg);
	execve("/bin/ls", argv, env);
}
