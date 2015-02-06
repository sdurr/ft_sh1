/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 10:01:40 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/06 10:04:40 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sh1(char **av, char **env)
{
	char *line;

	env  = ft_get_env(env);
	line = ft_strnew(15);
	ft_putstr("& > ");
	while (ret == 1)
	{
		ret = get_next_line(&line, 0);
		test_commande(line, av, env);
		ft_putstr(line);
		free(line);
	}
	return (0);
}
