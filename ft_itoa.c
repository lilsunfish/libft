/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 12:23:27 by rastle            #+#    #+#             */
/*   Updated: 2018/04/21 18:03:12 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char *new;

	new = (char *)malloc(sizeof(char) * 2);
	if (!new)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(new, "-2147483648"));
	if (n < 0)
	{
		new[0] = '-';
		new[1] = '\0';
		new = ft_strjoin(new, ft_itoa(-n));
	} 
	if (n >= 10)
	{
		new = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	}
	if (n <= 10 && n > 0)
	{
		new[0] = n + '0';
		new[1] = '\0';
	}
	return (new);	
}
