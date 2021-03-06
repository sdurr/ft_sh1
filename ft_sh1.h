/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 09:58:44 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/08 09:50:17 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SH1_H
# define FT_SH1_H

int			main(int ac, char **av, char **env);
int			ft_sh1(char **av, char **env);
int			ft_cd(char **line, char **env);
int			commande_sys(char **line, char **av, char **env, char *split_path);
int			commande_not_found(char **line);
int			commande_unsys(char **line, char **env);
int			test_commande(char **line, char **av, char **env, int j);
int			child(char **line, char **av, char **env, char *path);
int			ft_access(char **line, char *path);

char		**ft_set_env(char **line, char **env);
char		**ft_shell_up(char **env, char **line);
char		**ft_shell_down(char **env);
char		**split_path(char **env);
char		**ft_modif_env(char **env, char *ch);
char		**ft_env_home(char **env);
char		**ft_unset_env(char **line, char **env);
char		**ft_av(char **line, int i);

void		ft_ls(char **line, char **env, char **av);
void		ft_cat(char **line, char **env, char **av);

char		*ft_getenv(char **env);
char		*ft_gethome(char **env);
char		*user(char **env);
char		*test_space(char **l, int j);
#endif
