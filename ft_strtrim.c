/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 13:45:48 by rastle            #+#    #+#             */
/*   Updated: 2018/04/30 23:09:38 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	char *new;
	
	a = 0;
	c = 0;
	if (!s)
		return (NULL);
	if ((int)(ft_strlen(s) - 1) == -1)
		return (ft_strnew(1));
	while ((s[a] == ' ' || s[a] == '\n' || s[a] == '\t'))
	{
		a++;
		if (s[a] == '\0')
			return (ft_strnew(1));
	}
	b = ft_strlen(s) - 1;
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b--;
	new = (char *)malloc(sizeof(char) * (b - a + 2));
	if (!new)
		return (NULL);
	while (c < b - a + 1)
	{	
		new[c] = s[a + c];
		c++;
	}
	new[c] = '\0';
	return (new);
}
