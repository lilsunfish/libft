/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 13:24:30 by rastle            #+#    #+#             */
/*   Updated: 2018/04/18 13:41:06 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
	int i;
	char *join;

	i = 0;
	join = (char *)malloc((sizeof(char *) * ft_strlen(s1)) + (sizeof(char *) * ft_strlen(s2)) + 1);
	if (join)
	{
		while (*s1)
		{
			join[i] = s1;
			s1++;
			i++;
		}
		while (*s2)
		{
			join[i] = s2;
			s2++;
			i++;
		}
		join[i] = '\0';
		return (join);
	}
	return (NULL);
}
