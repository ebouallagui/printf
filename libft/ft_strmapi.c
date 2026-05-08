/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:28:40 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/01 15:20:53 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*arr;

	i = 0;
	if (!s || !f)
		return (NULL);
	arr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		arr[i] = f(i, (char)s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
