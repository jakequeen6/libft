/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqueen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 04:45:41 by jaqueen           #+#    #+#             */
/*   Updated: 2018/07/15 02:36:54 by jaqueen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1cpy;

	s1cpy = s1;
	while (*s1cpy != '\0')
		s1cpy++;
	while (n-- > 0 && *s2 != '\0')
		*s1cpy++ = *s2++;
	*s1cpy = '\0';
	return (s1);
}