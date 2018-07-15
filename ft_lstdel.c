/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqueen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 03:58:20 by jaqueen           #+#    #+#             */
/*   Updated: 2018/07/15 02:16:05 by jaqueen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;

	if (!alst)
		return ;
	while (*alst)
	{
		new = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = new;
	}
	alst = NULL;
}
