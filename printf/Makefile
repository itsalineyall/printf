NAME = libftprintf.a
LIBFT = libft.a
SRCS = ft_printf.c

OBJS = ${SRCS:.c=.o} // isso vai pegar todos os .c e transformar em .o


CC = cc
FLAGS = -Wall -Wextra - Werror
INCLUDE = -I . // isso vai ser o caminho para o header
LIBFT_PATH = libft/libft.a

.c.o:
	${CC} ${FLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} // isso vai pegar todos os .o e transformar em .a
	ar rcs ${NAME} ${OBJS} ${LIBFT}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: