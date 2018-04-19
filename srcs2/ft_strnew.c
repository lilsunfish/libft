/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 10:34:59 by rastle            #+#    #+#             */
/*   Updated: 2018/04/18 10:49:29 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(sizeof(char *) * size + 1);
	if (str)
	{
		ft_bzero(str, size);
		return (str);
	}
	return (NULL);
}
