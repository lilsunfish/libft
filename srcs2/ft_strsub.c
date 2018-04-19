/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 12:48:55 by rastle            #+#    #+#             */
/*   Updated: 2018/04/18 13:24:13 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;
	unsigned int i;

	sub = (char *)malloc(sizeof(char *) * len);
	i = 0;
	if (sub)
	{
		while (s[start] && start <= len)
		{
			sub[i] = s[start];
			start++;
			i++;
		}
		return (sub);
	}
	return (NULL);
}
