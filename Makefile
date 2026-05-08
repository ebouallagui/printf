# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/08 18:36:33 by eboualla          #+#    #+#              #
#    Updated: 2026/05/08 19:09:49 by eboualla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a



CC
CFLAGS

SRC = ft_printf.c \
	  handlers/handle_char.c \
	  libft/libft.a
	  ...

OBJ

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

$NAME: $(OBJ)
	@make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	rm


