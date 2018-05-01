/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:08:27 by rastle            #+#    #+#             */
/*   Updated: 2018/04/17 18:38:15 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long r;
	long neg;
	unsigned int i;

	r = 0;
	neg = 1;
	i = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	if (str[i] == '+')
	{
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(r * neg));
}
