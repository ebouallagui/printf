/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:10:10 by eboualla          #+#    #+#             */
/*   Updated: 2026/04/22 14:43:47 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	strlen;
	char	*dest;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen)
		return (ft_strdup(""));
	if (len > strlen - start)
		len = strlen - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s + start, len);
	dest[len] = '\0';
	return (dest);
}
