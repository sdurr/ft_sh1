/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modif_env.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/07 10:15:57 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/07 10:50:40 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_modif_env(char **env, char *ch)
{
	int i;
	int j;

	i = 0;
	if (ch)
	{
		while (env[i] && ft_strncmp(env[i], "PWD", 3) != 0)
			i++;
		j = ft_strlen(env[i]);
		if (ft_strncmp(ch, "..", 2) != 0)
		{
			env[i] = ft_strjoin(env[i], "/");
			env[i] = ft_strjoin(env[i], ch);
		}
		else
		{
			while (j >= 0 && env[i][j] != '/')
				env[i][j--] = '\0';
			env[i][j--] = '\0';
		}
	}
	return (env);
}
