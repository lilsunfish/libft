/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 12:19:17 by rastle            #+#    #+#             */
/*   Updated: 2018/05/01 12:39:42 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (!alst || !del)
		return ;
	del((*alst)->content, (*alst)->content-size);
	free(*alst);
	*alst = NULL;
}
