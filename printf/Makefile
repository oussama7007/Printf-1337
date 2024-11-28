NAME = libftprintf.a

SRCS =	ft_puthex.c ft_putnbr.c ft_putstr.c ft_printf.c \
	ft_putchar.c ft_putuphex.c ft_putpointer.c ft_putunbr.c ft_strlen.c



OBJS = ${SRCS:.c=.o}

LIBC = ar rc
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@${RM} ${OBJS}
	
fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY : clean
