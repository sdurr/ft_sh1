/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tremblin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 13:20:24 by tremblin          #+#    #+#             */
/*   Updated: 2015/03/03 09:26:40 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "ft_sh1.h"

int		ft_cd(char **line, char **env)
{
	char *ch;
	char *error;

	*line = test_space(line);
	if (ft_strncmp(*line, "cd", 2) == 0)
		error = ft_strdup("cd: no such file or directory: ");
	else
		error = ft_strdup("ft_minishell1: no such file or directory: ");
	ch = ft_strnew(ft_strlen(*line));
	if (**line != '/')
	{
		if ((ch = ft_strchr(*line, ' ')) != NULL)
			ch++;
	}
	if (**line == '/')
		ch = ft_strdup(*line);
	if (chdir(ch) == -1 && ch != NULL && *ch != '\0')
	{
		ft_putstr_fd(error, 2);
		ft_putstr_fd(ch, 2);
		ft_putstr("\n");
	}
	if (ch == NULL)
		chdir(ft_gethome(env));
	return (1);
}
