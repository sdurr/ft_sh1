/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tremblin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 13:20:24 by tremblin          #+#    #+#             */
/*   Updated: 2015/02/12 13:18:11 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_cd(char **line)
{
	char *ch;

	if (**line != '/')
	{
		ch = ft_strchr(*line, ' ');
		ch++;
	}
	if (**line == '/')
		ch = ft_strdup(*line);
	chdir("~");
	chdir(ch);
	return (1);
}
