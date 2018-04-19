/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:13:51 by rastle            #+#    #+#             */
/*   Updated: 2018/04/17 11:14:10 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
