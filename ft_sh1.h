/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 09:58:44 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/09 13:23:17 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_SH1_H
# define	FT_SH1_H

int			main(int ac, char **av, char **env);
int			ft_sh1(char **av, char **env);
int			ft_cd(char **line);
int			commande_sys(char **line, char **av, char **env);
int			test_commande(char **line, char **av, char **env);

char		**ft_set_env(char **line, char **env);
void		fils(char **line, char **av, char **env);
void		ft_ls(char **line, char **envv, char **av);

char		*ft_getenv(char **env);

#endif
