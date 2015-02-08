/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 10:01:40 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/08 09:46:49 by sdurr            ###   ########.fr       */
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
	*env = ft_getenv(env);
	line = ft_strnew(15);
	ft_putstr("& > ");
	while (ret == 1)
	{
		ret = get_next_line(0, &line);
		test_commande(&line, av, env);
		ft_putstr(line);
		free(line);
	}
	return (0);
}
