/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:25:37 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/11 18:54:08 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	check_conv(const char *format, va_list args, int i, int *count)
{
	char	des;

	des = format[i + 1];
	if (des == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (des == 's')
		handle_s(va_arg(args, char *), count);
	else if (des == 'p')
		handle_p(va_arg(args, void *), "0123456789abcdef", count);
	else if (des == 'd' || des == 'i')
		handle_i(va_arg(args, int), count);
	else if (des == 'u')
		handle_u(va_arg(args, unsigned int), "0123456789", count);
	else if (des == 'x')
		handle_x(va_arg(args, unsigned int), "0123456789abcdef", count);
	else if (des == 'X')
		handle_x(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	else if (des == '%')
		ft_putchar('%', count);
	return ;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			check_conv(format, args, i, &count);
			i++;
		}
		i++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	int				i;
	char			c;
	char			*s;
	unsigned int	hex;
	unsigned int	heX;
	unsigned int	u;
	int				res1;
	int				res2;
	void			*ptr;

	hex = 44;
	heX = 44;
	u = 123456;
	i = 5;
	c = 'e';
	s = "Hello";
	ptr = &i;
	res1 = (ft_printf("int%d, char%c, string%s, hex%x, heX%X, u%u, void%p also
				%%l", i, c, s, hex, heX, u, ptr));
	printf("\n");
	res2 = (printf("int%d, char%c, string%s, hex%x, heX%X, u%u, void%p also
				%%l", i, c, s, hex, heX, u, ptr));
	printf("\n");
	printf("return (1 = %d, return 2 = %d", res1, res2));
	printf("\n");
}
*/
