/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:40:19 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/03 09:03:50 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_gethome(char **env)
{
	char	*ret;
	int		i;

	i = 0;
	while (ft_strncmp(env[i], "HOME=", 5) != 0 && env[i] != NULL)
		i++;
	ret = ft_strnew(ft_strlen(env[i] + 1));
	ret = ft_strchr(env[i], '=');
	if (ret)
		ret++;
	return (ret);
}
