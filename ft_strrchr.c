/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 19:36:09 by rastle            #+#    #+#             */
/*   Updated: 2018/04/21 19:39:13 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	return (NULL);
}
