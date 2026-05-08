/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:27:13 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/01 14:03:56 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lastc;

	lastc = NULL;
	while (*s)
	{
		if ((unsigned char)c == (unsigned char)*s)
			lastc = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (lastc);
}
