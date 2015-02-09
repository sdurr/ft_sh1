/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 09:21:54 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/09 13:19:28 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void		ft_ls(char **line, char **env, char **av)
{
	char *arg;

	arg = ft_strchr(*line, 's');
	arg++;
	arg++;
	if (*arg != '\0')
	{
		chdir("~");
		chdir(arg);
	}
		execve("/bin/ls", av, env);
}
