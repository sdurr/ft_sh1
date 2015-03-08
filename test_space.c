/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_space.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 10:40:29 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/08 09:51:07 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include "libft.h"

char		*test_space(char **l, int j)
{
	int		i;
	char	*ret;

	*l = ft_strtrim(*l);
	ret = ft_strnew(ft_strlen(*l));
	i = 0;
	while (l[0][i] != '\0')
	{
		while (l[0][i] != ' ' && l[0][i] != '\t' && l[0][i] != '\0')
			ret[j++] = l[0][i++];
		if (l[0][i] == ' ' && l[0][i - 1] != ' '
			&& j >= 0 && l[0][i + 1] != '\0')
			ret[j++] = l[0][i++];
		else if (l[0][i] == '\t' && l[0][i - 1] != '\t' && l[0][i + 1])
		{
			ret[j++] = ' ';
			i++;
		}
		else
			i++;
	}
	if (ret[ft_strlen(ret) - 1] == ' ' || ret[ft_strlen(ret) - 1] == '\t')
		ret[ft_strlen(ret) - 1] = '\0';
	return (ret);
}
