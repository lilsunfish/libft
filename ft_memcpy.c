/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 19:39:45 by rastle            #+#    #+#             */
/*   Updated: 2018/04/22 23:22:05 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *d;
	char *s;


	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d && s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}
