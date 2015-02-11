/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:40:19 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/10 17:28:51 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_getenv(char **env)
{
	char *ret;
	int i;

	ret = ft_strnew(ft_strlen(env[0] + 1));
	i = 0;
	ret = ft_strchr(env[i], '=');
	ret++;
	return (ret);
}
