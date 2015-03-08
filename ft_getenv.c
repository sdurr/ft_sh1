/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:40:19 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/07 09:56:00 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_getenv(char **env)
{
	char	*ret;
	int		i;

	i = 0;
	while (env[i] && ft_strncmp(env[i], "PATH=", 5) != 0)
		i++;
	if (env[i])
	{
		ret = ft_strnew(ft_strlen(env[i] + 1));
		ret = ft_strchr(env[i], '=');
	}
	else
		ret = ft_strdup(".");
	ret++;
	return (ret);
}
