/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 12:12:04 by rastle            #+#    #+#             */
/*   Updated: 2018/04/21 19:01:40 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int numwords(char const *s, char c)
{
	unsigned int i; 
	int ct;

	i = 0;
	ct = 0;

	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0')
		{
			ct++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	return (ct);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char *new;

	new = (char *)malloc(sizeof(char) * (n + 1));
	if (new)
	{
		new = ft_strncpy(new, s, n);
		new[n] = '\0';
		return (new);
	}
	return (NULL);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		words;
	char	**arr;

	i = 0;
	k = 0;
	words = numwords(s, c) + 1;
	arr = (char **)malloc(sizeof(char *) * words);
	if (!arr)
		return (NULL);
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
