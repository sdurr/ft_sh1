/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:18:07 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:56:58 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_word_long(char *s, char c, int i)
{
	int len;

	len = 3;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	if (s[i] == '\0')
		return (-1);
	else
		return (len);
}
