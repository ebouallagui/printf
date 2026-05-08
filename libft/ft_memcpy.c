/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:28:49 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/05 20:25:45 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "12356789";
	char	dest[20];
	size_t n = 3;
	
	ft_memcpy(dest, src, n);
	dest[n] = '\0';
	printf("%s\n", dest); 
}
*/
