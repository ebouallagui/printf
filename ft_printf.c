/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:25:37 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/09 13:24:40 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

// checks type of descriptor & conversion and handles it
static void	check_conv(const char *str, va_list args, int i, int *count)
{
	char	des;

	des = str[i + 1];
	if (des == 'c')
		handle_c(va_arg(args, int), &count);
	else if (des == 's')
		handle_s(va_arg(args, char *), &count);
	else if (des == 'p')
		handle_p(va_args(args, void *), "0123456789abcdef", &count);
	else if (des == 'd' || des == 'i')
		handle_i(va_args(args, int), &count);
	else if (des == 'u')
		handle_u(va_args(args, unsigned int), &count);
	else if (des == 'x')
		handle_x(va_args(args, unsigned int), "0123456789abcdef", &count);
	else if (des == 'X')
		handle_x(va_args(args, unsigned int), "0123456789ABCDEF", &count);
	else if (des == '%')
		ft_putchar('%', &count);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (ft_isprint(str[i]))
	{
		if (str[i] != '%')
			write(1, &str[i], 1);
		else
		{
			check_conv(str, args, i, &count);
			i++;
		}
		i++;
	}
	return (count);
}
