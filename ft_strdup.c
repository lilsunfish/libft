/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:30:36 by rastle            #+#    #+#             */
/*   Updated: 2018/04/21 16:32:55 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*d;

	len = (ft_strlen(src) + 1);
	d = (char *)malloc(sizeof(*src * len));
	ft_strcpy(d, src);
	return (d);
}
