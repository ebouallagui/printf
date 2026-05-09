/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:27:39 by eboualla          #+#    #+#             */
/*   Updated: 2026/05/09 14:50:57 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);

void	ft_putchar(char c, int *count);
void	handle_c(int c, int *count);
void	handle_i(int i, int *count);
void	handle_p(void *ptr, char *base, int *count);
void	handle_s(char *s, int *count);
void	handle_x(unsigned long i, char *base, int *count);

int		main(void);

#endif
