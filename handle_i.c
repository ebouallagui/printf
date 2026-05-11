/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 08:40:03 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/11 13:43:08 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	handle_i(int i, int *count)
{
	long	n;

	n = i;
	if (n < 0)
	{
		ft_putchar('-', count);
		n = -n;
	}
	if (n >= 10)
		handle_i(n / 10, count);
	ft_putchar((n % 10) + '0', count);
}
