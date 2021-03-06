/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqueen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 03:51:36 by jaqueen           #+#    #+#             */
/*   Updated: 2018/07/15 02:30:08 by jaqueen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	while (*s2 != '\0')
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}
