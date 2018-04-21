/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:13:05 by rastle            #+#    #+#             */
/*   Updated: 2018/04/21 15:04:00 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')
			&& (c >= 'a' && c <= 'z'))
		{
			return (1);
		}
	return (0);
}