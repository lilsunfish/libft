/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 11:17:21 by rastle            #+#    #+#             */
/*   Updated: 2018/04/18 12:30:18 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	char *s_out;

	i = 0;
	s_out = (char *)malloc(sizeof(*s));
	while (s[i])
	{
		s_out[i] = f(s[i]);
		i++;
	}
	s_out[i] = '\0';
	return (s_out);
}
