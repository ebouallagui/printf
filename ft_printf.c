/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:25:37 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/08 17:30:38 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

// checks type of descriptor and handles it
void	check_conv(const char *str, va_list args, int i)
{
	if (str[i + 1] == d)
		handle_int(va_arg(args, int));
	else if (str[i] == c)
		handle_char(va_arg(args, char);
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
			if (str[i + 1] == '%')
				write(1, '%', 1);
			else
				check_conv(str, args, i);
		}
		i++;
	}
	return (count);
}

#include <stdio.h>

int	main(void)
{
	int		i;
	char	c;
	char	*s;

	i = 5;
	c = 'e';
	s = "Hello";
	ft_printf("Hello%d or %c", i, c);
	printf("Hello%d or %c", i, c);
}
