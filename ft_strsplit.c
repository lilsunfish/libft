/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 12:12:04 by rastle            #+#    #+#             */
/*   Updated: 2018/05/01 16:16:57 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_splitter(char const *s, char c, char **arr)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (j < i)
		{
			arr[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	arr[k] = NULL;
	return (arr);
}

char		**ft_strsplit(char const *s, char c)
{
	int		words;
	char	**arr;

	if (!s)
		return (NULL);
	words = ft_numwords(s, c) + 1;
	arr = (char **)malloc(sizeof(char *) * words);
	if (!arr)
		return (NULL);
	return (ft_splitter(s, c, arr));
}
