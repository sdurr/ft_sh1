/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_commande.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 10:04:54 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/06 10:08:58 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

int		test_commande(char **line, char **av, char **env);
{
	if (ft_strncmp(*line, "ls", 2) == 0 || ft_strncmp(*line, "/bin/ls", 7) == 0)
		return (ft_ls(line, av, env));
	if (ft_strncmp(*line, "cd", 2) == 0 || ft_strncmp(*line, "/bin/cd", 7) == 0)
		return (ft_ls(line, av, env));
}
