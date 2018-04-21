/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 12:07:55 by rastle            #+#    #+#             */
/*   Updated: 2018/04/19 12:08:16 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int neg;

	neg = 1;
	if (nb < 0)
	{
		neg = -1;
	}
	if (nb / 10 == 0)
	{
		if (neg == -1)
			ft_putchar_fd('-');
		ft_putchar_fd((nb * neg) + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar_fd(((nb % 10) * neg) + '0');
	}
}
