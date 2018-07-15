/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqueen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 02:57:23 by jaqueen           #+#    #+#             */
/*   Updated: 2018/07/15 03:02:34 by jaqueen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcnt(const char *t, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (t[i] != '\0')
	{
		while (t[i] == c)
			i++;
		if (t[i] != c)
			count++;
		while (t[i] != c && t[i])
			i++;
	}
	return (count);
}
