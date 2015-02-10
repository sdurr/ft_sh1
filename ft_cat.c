/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 08:42:06 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/10 09:10:25 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void		ft_cat(char **line, char **env, char **av)
{
	char	*arg;
	int		i;
	char	*test;

	test = NULL;
	i = 0;
	arg = ft_strdup(*line);
	arg += 4;
	if (*arg == '-')
	{
		test = ft_strnew(3);
		test[0] = *arg;
		arg++;
		test[1] = *arg;
		arg += 2;
		ft_putchar (*arg);
	}
	av[i++] = ft_strdup("cat");
	if (test != NULL)
		av[i++] = test;
	av[i++] = ft_strdup(arg);
	av[i] = NULL;
	execve("/bin/cat", av, env);
}
