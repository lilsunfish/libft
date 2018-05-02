/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 15:02:33 by rastle            #+#    #+#             */
/*   Updated: 2018/05/01 15:03:02 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *s, size_t n)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * (n + 1));
	if (new)
	{
		new = ft_strncpy(new, s, n);
		new[n] = '\0';
		return (new);
	}
	return (NULL);
}
