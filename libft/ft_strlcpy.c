/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:41:39 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/05 20:49:10 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int main (void)
{
	char	src[] = "Hello";
	char	dest[20];

	printf("%zu\n", ft_strlcpy(dest, src, 4));
	printf("%s\n", dest);
}
*/
