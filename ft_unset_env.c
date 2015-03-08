/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 09:10:19 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/08 10:03:00 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_sh1.h"

char	**ft_unset_env(char **line, char **env)
{
	int			i;
	char		*bkp;
	char		*test;
	int			ret;

	*line = test_space(line, 0);
	ret = 0;
	bkp = ft_strdup(*line);
	i = -1;
	test = ft_strnew(15);
	bkp += 9;
	test = ft_strncpy(test, bkp, ft_strlen(bkp));
	if ((ft_strchr(test, ' ')) != NULL)
		ft_putstr_fd("too many arguments to function: unsetenv\n", 2);
	while (env[++i] != NULL && ret == 0)
		if (ft_strncmp(test, env[i], ft_strlen(bkp)) == 0)
			while (env[ret] != NULL)
			{
				ret = i;
				ret++;
				env[i++] = env[ret];
			}
	if (env[i])
		env[i - 2] = NULL;
	return (env);
}
