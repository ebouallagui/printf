/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:21:31 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/29 11:10:46 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	handle_p(void *ptr, char *base, int *count)
{
	unsigned long	l;

	if (ptr == 0)
	{
		handle_s("(nil)", count);
		return ;
	}
	handle_s("0x", count);
	l = (unsigned long)ptr;
	handle_x(l, base, count);
	return ;
}
