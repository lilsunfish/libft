/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maparray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 15:21:17 by rastle            #+#    #+#             */
/*   Updated: 2018/05/01 15:23:58 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_maparray(int *tab, int length, int (*f)(int))
{
	int i;
	int *out;

	i = 0;
	out = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}
