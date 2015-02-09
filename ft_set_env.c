/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 09:10:19 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/09 10:23:43 by tremblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void			ft_set_env(char **line, char **env)
{
	char *recup;
	int i;
	
	recup = ft_strchr(*line, 'v');
	recup++;
	while (*env[i] != '=')
		i++;
	i++;
	while (*recup != '\0')
		*env[i++] = *recup++;
}
