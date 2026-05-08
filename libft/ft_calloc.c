/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:44:37 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/01 14:47:59 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	if (nmemb != 0 && size > ((size_t) - 1) / nmemb)
		return (NULL);
	totalsize = nmemb * size;
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalsize);
	return (ptr);
}
