/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 09:10:19 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/09 13:33:29 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char 			**ft_set_env(char **line, char **env)
{
	char **recup;
	int i;
	char *bkp;

	bkp = ft_strdup(*line);
	i = 0;
	while (env[i] != NULL)
		i++;
	if (!(recup = (char **)malloc(sizeof(char *) * i + 2)))
		return (NULL);
	bkp += 7;
	env[i] = ft_strdup(bkp);
	env[i + 1] = NULL;
	return (env);
}
