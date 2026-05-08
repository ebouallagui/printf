/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:01:09 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/05 19:12:19 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	buf[] = {"asg23"};

	printf("%s\n", (char *)ft_memset(buf, 120, sizeof(buf)));
}
*/
