/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:33:58 by rastle            #+#    #+#             */
/*   Updated: 2018/06/04 17:29:36 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstrev(t_list **lst)
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = *lst;
	if (!a || !a->next)
		return ;
	b = a->next;
	c = b->next;
	a->next = 0;
	b->next = a;
	while (c)
	{
		a = b;
		b = c;
		c = c->next;
		b->next = a;
	}
	*lst = b;
}
