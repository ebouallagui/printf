/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:23:59 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/09 14:30:25 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		i;
	char	c;
	char	*s;

	i = 5;
	c = 'e';
	s = "Hello";
	ft_printf("integer%d or %ccharacter string%s", i, c, s);
	printf("\n");
	printf("integer%d or %ccharacter string%s", i, c, s);
	printf("\n");
}
