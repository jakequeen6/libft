/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqueen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 02:40:03 by jaqueen           #+#    #+#             */
/*   Updated: 2018/07/15 02:20:16 by jaqueen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t p;

	p = 0;
	while (p < n)
	{
		((char*)dst)[p] = ((char*)src)[p];
		if (((char*)dst)[p] == (char)c)
			return (&dst[p + 1]);
		p++;
	}
	return (0);
}
