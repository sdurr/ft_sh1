/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 10:01:40 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/09 09:08:11 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_sh1.h"
#include <stdlib.h>

int		ft_sh1(char **av, char **env)
{
	char	*line;
	int		ret;

	ret = 1;
	line = ft_strnew(15);
	ft_putstr("minishell1 > ");
	while (ret == 1)
	{
		ret = get_next_line(0, &line);
		if (test_commande(&line, av, env) == -1)
			ret = 0;
		ft_putstr(line);
		free(line);
		ft_putstr("\nminishell1 > ");
	}
	return (0);
}