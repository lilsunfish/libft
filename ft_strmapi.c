/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 12:29:53 by rastle            #+#    #+#             */
/*   Updated: 2018/05/01 16:18:16 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_out;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_out = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s_out)
		return (NULL);
	while (s[i])
	{
		s_out[i] = f(i, s[i]);
		i++;
	}
	s_out[i] = '\0';
	return (s_out);
}
