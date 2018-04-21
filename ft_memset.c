/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 14:54:53 by rastle            #+#    #+#             */
/*   Updated: 2018/04/21 14:51:54 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *temp;

	temp = (unsigned char *)b;
	while (len--)
	{
		*temp = (unsigned char)c;
		temp++;
	}
	return (b);
}
