/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:23:54 by rastle            #+#    #+#             */
/*   Updated: 2018/04/17 11:29:18 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find, size_t len)
{
	int i;
	int j;
	size_t v;

	i = 0;
	j = 0;
	v = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0' && v < len)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
			v++;
		}
		i++;
	}
	return (0);
}
