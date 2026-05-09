# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/08 18:36:33 by eboualla          #+#    #+#              #
#    Updated: 2026/05/09 14:51:07 by eboualla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)
AR = ar rcs
RM = rm -f

SRC = ft_printf.c \
	  main.c \
	  handlers/ft_putchar.c \
	  handlers/handle_c.c \
	  handlers/handle_i.c \
	  handlers/handle_p.c \
	  handlers/handle_s.c \
	  handlers/handle_x.c \
	  libft/libft.a

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
.DEFAULT_GOAL := all
