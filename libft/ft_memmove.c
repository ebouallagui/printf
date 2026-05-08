/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:36:06 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/05 20:30:20 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = dest;
	s = src;
	if (d > s)
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "12345678";
	char	dest[20];
	size_t	n;

	n = 5;
	ft_memmove(dest, src, n);
	dest[n] = '\0';
	printf("%s\n", dest);
}
*/
