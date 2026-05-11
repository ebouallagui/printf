/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:37:48 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/11 18:49:57 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	handle_u(unsigned int i, char *base, int *count)
{
	unsigned long	l;

	l = i;
	if (l >= 10)
		handle_u(l / 10, base, count);
	ft_putchar(base[l % 10], count);
	return ;
}
