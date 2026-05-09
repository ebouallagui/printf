/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:21:31 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/09 13:19:45 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

void handle_p(void *ptr, char *base, int *count)
{
	unsigned int i = (unsigned int)ptr;
	handle_x(i, base, count);
	return ;
}
