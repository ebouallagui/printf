/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:47:27 by eboualla          #+#    #+#             */
/*   Updated: 2026/04/23 14:27:33 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	nlen(int n)
{
	size_t	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*arr;
	size_t	len;

	len = nlen(n);
	arr = malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	arr[len] = '\0';
	if (n < 0)
		arr[0] = '-';
	if (n == 0)
		arr[0] = '0';
	while (n != 0)
	{
		if (n < 0)
			arr[--len] = '0' - (n % 10);
		else
			arr[--len] = '0' + (n % 10);
		n /= 10;
	}
	return (arr);
}
