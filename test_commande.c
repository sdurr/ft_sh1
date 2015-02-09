/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_commande.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 10:04:54 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/09 10:25:03 by tremblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include "libft.h"

int		test_commande(char **line, char **av, char **env)
{
	if (ft_strncmp(*line, "ls", 2) == 0 || ft_strncmp(*line, "/bin/ls", 7) == 0
		|| ft_strncmp(*line, "/bin/pwd", 8) == 0
		||  ft_strncmp(*line, "pwd", 3) == 0 || ft_strncmp(*line, "env", 3) == 0)
		return (commande_sys(line, av, env));
	if (ft_strncmp(*line, "setenv", 6) == 0)
	{
		ft_set_env(line, env);
		return (1);
	}
	if (ft_strncmp(*line, "cd", 2) == 0 || ft_strncmp(*line, "/bin/cd", 7) == 0)
		return (ft_cd(line));
	if (ft_strncmp(*line, "exit", 4) == 0)
		return (-1);
	return (1);
}
