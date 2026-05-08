/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:51:45 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/01 14:56:25 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(s);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, len);
	dest[len] = '\0';
	return (dest);
}
