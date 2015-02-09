/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_sys.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:24:18 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/09 12:59:04 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/wait.h>
#include "ft_sh1.h"
#include "libft.h"

int			commande_sys(char **line, char **av, char **env)
{
	pid_t pere;

	pere = fork();
	if (pere > 0)
		waitpid(pere, 0, 0);
	if (pere == 0)
		fils(line, av, env);
	return (-3);
}
