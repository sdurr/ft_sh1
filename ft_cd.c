/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/08 10:06:58 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/08 10:07:00 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "ft_sh1.h"

static void		ft_put_non_ok(char *error, char *ch)
{
	ft_putstr_fd(error, 2);
	ft_putstr_fd(ch, 2);
	ft_putstr("\n");
}

int				ft_cd(char **line, char **env)
{
	char *ch;
	char *error;

	*line = test_space(line, 0);
	if (ft_strncmp(*line, "cd", 2) == 0)
		error = ft_strdup("cd: no such file or directory: ");
	else
		error = ft_strdup("ft_minishell1: no such file or directory: ");
	ch = ft_strnew(ft_strlen(*line));
	if (**line != '/')
		if ((ch = ft_strchr(*line, ' ')) != NULL)
			ch++;
	if (**line == '/')
		ch = ft_strdup(*line);
	if (chdir(ch) == -1 && ch != NULL && *ch != '\0')
		ft_put_non_ok(error, ch);
	else if (ch)
		env = ft_modif_env(env, ch);
	if (ch == NULL)
	{
		chdir(ft_gethome(env));
		env = ft_env_home(env);
	}
	return (1);
}
