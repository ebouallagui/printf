/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:25:37 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/08 15:29:39 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *n, )
{
	va_list args;
	va_start (args, n);
	va_arg ;
	va_end ;


	

	while (ft_isprint())
	{
		if (is_char())
			ft_putchar();

	}
}

#include <stdio.h>

int main (void)
{
	int i = 5;
	char c = 'e';
	char *s = "Hello";

	ft_printf(i);
	printf(i);
}
