/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_commande.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 10:04:54 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/11 09:45:25 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include "libft.h"
#include <stdlib.h>

int		test_commande(char **line, char **av, char **env)
{
	char	**split;
	int		i;

	line = line;
	av = av;
	i = 0;
	split = split_path(env);
	i = commande_unsys(line, env);
	if (i == -1)
		return (-1);
	else if (i == 1)
		return (1);
	else
	{
		return (commande_sys(line, av, env, split));
	}
		return (1);
}
