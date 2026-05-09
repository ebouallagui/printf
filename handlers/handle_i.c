/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 08:40:03 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/09 13:11:37 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

void	handle_i(int i)
{
	ft_putnbr_fd(i, 1);
	return (numlen(i));
}

//was ist bei -0?? len bleibt bei 1
