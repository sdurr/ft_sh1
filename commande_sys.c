/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_sys.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:24:18 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/12 10:27:49 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/wait.h>
#include "ft_sh1.h"
#include "libft.h"

int			commande_sys(char **line, char **av, char **env, char **split_path)
{
	pid_t	pere;
	int		test;
	int		i;

	i = 0;
	test = -1;
	pere = fork();
	if (pere > 0)
		waitpid(pere, 0, 0);
	if (pere == 0)
		while (test == -1 && split_path[i] != NULL)
			test = fils(line, av, env, split_path[i++]);
	if (split_path[i] == NULL)
		return (0);
	return(1);
}
