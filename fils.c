/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fils.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:30:55 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/08 13:31:52 by tremblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void		fils(char **line, char **av, char **env)
{
	if (ft_strncmp(*line, "ls", 2) == 0)
		execve("/bin/ls", av, env);
	if (ft_strncmp(*line, "pwd", 3) == 0)
		execve("/bin/pwd", av, env);
	if (ft_strncmp(*line, "env", 3) == 0)
		execve("/bin/env", env, av);
}
