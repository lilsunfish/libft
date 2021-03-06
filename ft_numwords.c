/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numwords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 15:03:54 by rastle            #+#    #+#             */
/*   Updated: 2018/05/01 16:18:58 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numwords(char const *s, char c)
{
	unsigned int	i;
	int				ct;

	i = 0;
	ct = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0')
		{
			ct++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	return (ct);
}
