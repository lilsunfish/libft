/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 23:07:45 by rastle            #+#    #+#             */
/*   Updated: 2018/04/22 23:21:46 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char *d;
	char *s;


	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d && s)
	{
		while (i < n && s[i] != c)
		{
			d[i] = s[i];
			if ((unsigned char)s[i] == (unsigned char)c)
				return ((char*)dst + i + 1)
			i++;
		}
	}
	return (NULL);
}
