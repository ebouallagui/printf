/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:12:35 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/06 14:20:18 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == ' ' || c == '\r'
		|| c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		res;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
int main(void)
{
	char *str = "      		-10";
	printf("%d\n", ft_atoi(str));
}
*/
