/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:10:51 by rastle            #+#    #+#             */
/*   Updated: 2018/04/21 20:21:37 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;
	ptr = 0;
	if (to_find[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				ptr = (char *)&str[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
