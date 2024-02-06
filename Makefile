# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emanukya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/03 17:26:12 by emanukya          #+#    #+#              #
#    Updated: 2024/02/05 16:31:04 by emanukya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := print_char.c \
		print_str.c \
		print_digit.c \
		print_pointer.c \
		ft_printf.c

NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}

LIBC = ar rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME} clean

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:  all clean fclean re

