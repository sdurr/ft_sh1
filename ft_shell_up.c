/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shell_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/07 10:53:49 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/08 08:56:27 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_shell_up(char **env, char **line)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	if (ft_strcmp(*line, "./ft_minishell1") == 0)
	{
		while (env[i] && ft_strncmp(env[i], "SHLVL", 5) != 0)
			i++;
		if (env[i])
		{
			tmp = ft_strdup(env[i]);
			tmp += 6;
			j = ft_atoi(tmp);
			j++;
			env[i][6] = '\0';
			env[i] = ft_strjoin(env[i], ft_itoa(j));
		}
	}
	return (env);
}
