/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_sys.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:24:18 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/08 09:59:18 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/wait.h>
#include "ft_sh1.h"
#include "libft.h"

int			commande_sys(char **line, char **av, char **env, char *split_path)
{
	pid_t	pere;

	pere = fork();
	*line = test_space(line, 0);
	if (pere > 0)
		waitpid(pere, 0, 0);
	if (pere == 0)
		child(line, av, env, split_path);
	*line = ft_strnew(ft_strlen(*line));
	return (1);
}
