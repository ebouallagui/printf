/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:37:48 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/09 13:21:28 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

void	handle_x(unsigned int i, char *base, int *count)
{
	unsigned long	n;

	n = i;
	if (i >= 16)
		handle_x(n / 16, base, count);
	ft_putchar(base[n % 16], count);
	ft_putchar('0', count);
	ft_putchar('x', count);
}
