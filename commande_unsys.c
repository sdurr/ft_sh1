/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_unsys.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/11 09:22:21 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/03 09:08:04 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_sh1.h"

int		commande_unsys(char **line, char **env)
{
	if (ft_strncmp(*line, "setenv", 6) == 0
		|| ft_strncmp(*line, "unsetenv", 8) == 0)
	{
		env = ft_set_env(line, env);
		return (1);
	}
	else if (ft_strncmp(*line, "cd", 2) == 0)
		return (ft_cd(line, env));
	else if (ft_strncmp(*line, "/bin/cd", 7) == 0 || **line == '/')
		return (ft_cd(line, env));
	else if (ft_strncmp(*line, "exit", 4) == 0)
		return (-1);
	return (0);
}
