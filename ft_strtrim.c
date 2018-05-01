/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 13:45:48 by rastle            #+#    #+#             */
/*   Updated: 2018/04/30 20:19:02 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *new;

	new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (new)
	{
		while (*s)
		{
			if (*s == ' ' || *s == '\n' || *s == '\t')
			{
				s++;
			}
			else
			{
				new = (char *)s;
				s++;
				new++;
			}
		}
		*new = '\0';
		return (new);
	}
	return (NULL);
}
