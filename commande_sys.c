/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_sys.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:24:18 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/08 09:47:37 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_sh1.h"

int			commande_sys(char **line, char **av, char **env)
{
	pid_t pere;

	pere = fork();
	if (pere == 0)
		fils(line, av, env);
	else
		return (1);
	return (0);
}
