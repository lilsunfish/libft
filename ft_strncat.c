/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 18:45:21 by rastle            #+#    #+#             */
/*   Updated: 2018/05/01 15:59:47 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char			*d;
	char			*s;
	unsigned int	i;

	d = s1;
	s = (char *)s2;
	i = 0;
	while (*d)
		d++;
	while (s[i] && i < n)
	{
		*d = s[i];
		d++;
		i++;
	}
	*d = '\0';
	return (s1);
}
