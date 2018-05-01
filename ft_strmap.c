/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 11:17:21 by rastle            #+#    #+#             */
/*   Updated: 2018/04/30 20:20:52 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *s_out;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_out = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s_out)
		return (NULL);
	while (s[i])
	{	
		s_out[i] = f(s[i]);
		i++;
	}
	s_out[i] = '\0';
	return (s_out);
}
