/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_commande.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 10:04:54 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/10 09:11:58 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include "libft.h"

int		test_commande(char **line, char **av, char **env)
{
	if (ft_strncmp(*line, "ls", 2) == 0 || ft_strncmp(*line, "/bin/ls", 7) == 0
		|| ft_strncmp(*line, "/bin/pwd", 8) == 0
		|| ft_strncmp(*line, "pwd", 3) == 0 || ft_strncmp(*line, "env", 3) == 0
		|| ft_strncmp(*line, "cat", 3) == 0
		|| ft_strncmp(*line, "/bin/cat", 3) == 0)
		return (commande_sys(line, av, env));
	else if (ft_strncmp(*line, "setenv", 6) == 0)
	{
		env = ft_set_env(line, env);
		return (1);
	}
	else if (ft_strncmp(*line, "cd", 2) == 0
			 || ft_strncmp(*line, "/bin/cd", 7) == 0 || **line == '/')
		return (ft_cd(line));
	else if (ft_strncmp(*line, "exit", 4) == 0)
		return (-1);
	else
		if (**line != '\0')
		{
			ft_putstr_fd("command not found: ", 2);
			ft_putstr_fd(*line, 2);
			ft_putchar ('\n');
		}
	return (1);
}
