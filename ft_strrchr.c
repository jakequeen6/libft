/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqueen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 04:48:00 by jaqueen           #+#    #+#             */
/*   Updated: 2018/07/15 02:39:47 by jaqueen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		index;

	i = 0;
	index = -1;
	while (s[i])
	{
		if (s[i] == c)
			index = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (index == -1)
		return (0);
	return ((char *)&s[index]);
}
