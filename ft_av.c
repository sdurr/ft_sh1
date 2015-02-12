/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_av.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 10:11:08 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/12 10:38:18 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_av(char **line)
{
	char	**av;
	int		i;
	char	*save;
	int		j;

	save = ft_strdup(*line);
	i = ft_count_char(*line, ' ');
	av = (char **)malloc(sizeof(char *) * i + 1);
	i = 0;
	while (*save != '\0')
	{
		j = 0;
		av[i] = ft_strdup(save);
		while (av[i][j] != ' ' && av[i][j] != '\0')
			j++;
		av[i][j] = '\0';
		i++;
		while (*save != ' ' && *save != '\0')
			save++;
		if (*save != '\0')
			save++;
	}
	av[i] = NULL;
	return (av);
}
