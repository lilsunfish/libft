/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 12:07:55 by rastle            #+#    #+#             */
/*   Updated: 2018/04/21 18:12:03 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
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
			ft_putchar_fd('-', fd);
		ft_putchar_fd((nb * neg) + '0', fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(((nb % 10) * neg) + '0', fd);
	}
}
