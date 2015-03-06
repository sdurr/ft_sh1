/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:40:19 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/06 16:19:45 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_gethome(char **env)
{
	char	*ret;
	int		i;

	i = 0;
	while (env[i] != NULL && ft_strncmp(env[i], "HOME=", 5) != 0)
		i++;
	if (env[i])
	  ret = ft_strnew(ft_strlen(env[i] + 1));
	if (env[i] != NULL)
	  ret = ft_strchr(env[i], '=');
	else
	  ret = ft_strdup(".~");
	if (ret)
	  ret++;
	return (ret);
}
