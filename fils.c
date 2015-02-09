/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fils.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:30:55 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/09 13:28:36 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_sh1.h"

void		fils(char **line, char **av, char **env)
{
	if (ft_strncmp(*line, "ls", 2) == 0)
		ft_ls(line, env, av);
	if (ft_strncmp(*line, "pwd", 3) == 0)
		execve("/bin/pwd", av, env);
	if (ft_strncmp(*line, "env", 3) == 0)
		while (*env != NULL)
		{
			ft_putchar ('\n');
			ft_putstr(*env);
			env++;
		}
	ft_putchar ('\n');
}
