/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:30:36 by rastle            #+#    #+#             */
/*   Updated: 2018/04/21 19:57:06 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*d;

	len = (ft_strlen(src) + 1);
	d = (char *)malloc(sizeof(*src * len));
	if (d)
	{
		ft_strcpy(d, src);
		return (d);
	}
	return (NULL);
}
