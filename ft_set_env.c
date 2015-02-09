/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 09:10:19 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/09 09:20:58 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int			ft_set_env(char **line, char **env)
{
	char *recup;

	env = env;
	recup = ft_strchr(*line, 'v');
	recup++;
	return (0);
}
