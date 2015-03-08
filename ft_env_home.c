/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modif_env.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/07 10:15:57 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/07 10:51:47 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_env_home(char **env)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (env[i] && ft_strncmp(env[i], "PWD", 3) != 0)
		i++;
	while (env[j] && ft_strncmp(env[j], "HOME", 4) != 0)
		j++;
	if (env[j])
		env[i] = ft_strdup(env[j]);
	return (env);
}
