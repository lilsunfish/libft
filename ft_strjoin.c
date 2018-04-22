/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 13:24:30 by rastle            #+#    #+#             */
/*   Updated: 2018/04/21 18:17:55 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
	char *join;

	join = (char *)malloc((sizeof(char *) * ft_strlen(s1)) + (sizeof(char *) * ft_strlen(s2)) + 1);
	if (join)
	{
		while (*s1)
		{
			*join = *s1;
			s1++;
			join++;
		}
		while (*s2)
		{
			*join = *s2;
			s2++;
			join++;
		}
		*join = '\0';
		return (join);
	}
	return (NULL);
}
