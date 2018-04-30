/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:23:54 by rastle            #+#    #+#             */
/*   Updated: 2018/04/22 17:05:29 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;
	ptr = 0;
	if (to_find[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				ptr = (char *)&str[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
