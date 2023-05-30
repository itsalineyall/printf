# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 18:28:51 by alvieira          #+#    #+#              #
#    Updated: 2023/05/30 18:05:26 by alvieira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c \
	ft_hex.c ft_putnbr_u.c ft_pointer.c

OBJS = ${SRCS:.c=.o}

CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
LIBFT = libft/libft.a
LIBFT_PATH = libft
MAKE = make -C

.c.o:
	${CC} ${FLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${MAKE} ${LIBFT_PATH} all 
	cp ${LIBFT} ${NAME}
	ar rcs ${NAME} ${OBJS}
	
all: ${NAME}

clean:
	${MAKE} ${LIBFT_PATH} clean
	${RM} ${OBJS}

fclean: clean
	${MAKE} ${LIBFT_PATH} fclean
	${RM} ${NAME}

re: fclean all

teste:
	${CC} ${FLAGS} ${SRCS} libftprintf.a -o teste

.PHONY: all clean fclean re teste