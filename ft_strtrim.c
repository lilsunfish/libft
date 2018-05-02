/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 13:45:48 by rastle            #+#    #+#             */
/*   Updated: 2018/05/01 16:11:05 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trimmer(char const *s)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;
	char			*new;

	a = 0;
	c = 0;
	while ((s[a] == ' ' || s[a] == '\n' || s[a] == '\t'))
	{
		a++;
		if (s[a] == '\0')
			return (ft_strnew(1));
	}
	b = ft_strlen(s) - 1;
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b--;
	if (!(new = (char *)malloc(sizeof(char) * (b - a + 2))))
		return (NULL);
	while (c < b - a + 1)
	{
		new[c] = s[a + c];
		c++;
	}
	new[c] = '\0';
	return (new);
}

char		*ft_strtrim(char const *s)
{
	if (!s)
		return (NULL);
	if ((int)(ft_strlen(s) - 1) == -1)
		return (ft_strnew(1));
	return (ft_trimmer(s));
}
