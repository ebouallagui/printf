/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:37:48 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/09 14:47:15 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

void	handle_x(unsigned long l, char *base, int *count)
{
	if (l >= 16)
		handle_x(l / 16, base, count);
	ft_putchar(base[l % 16], count);
	return ;
}
