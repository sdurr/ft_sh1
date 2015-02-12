/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_commande.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 10:04:54 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/12 15:32:26 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include "libft.h"
#include <stdlib.h>

int		test_commande(char **line, char **av, char **env)
{
	char	**split;
	int		i;
	int		j;
	int		test;

	j = 0;
	i = 0;
	split = split_path(env);
	i = commande_unsys(line, env);
	if (i == -1)
		return (-1);
	else if (i == 1)
		return (1);
	else
	{
		test = 0;
		while (split[j] != NULL && test == 0)
			test = ft_access(line, split[j++]);
		if (test == 1)
			return (commande_sys(line, av, env, split[j - 1]));
	}
	if (i == 0)
		return (commande_not_found(line));
	return (1);
}
