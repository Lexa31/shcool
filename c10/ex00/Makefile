SRC = ./srcs/
FTH = ./includes/
SRCS = ${SRC}ft_putchar.c ${SRC}ft_putstr.c ${SRC}ft_strcmp.c ${SRC}ft_strlen.c ${SRC}ft_swap.c ${SRC}main.c
COMP = gcc -Wall -Wextra -Werror 
ARRC = libft.a
RM = rm -f
FAILO = ${SRCS} ${OBJS}
OBJS = ${SRCS:.c=.o}

all: ${FAILO}
	${COMP} ${SRCS}
	ar rc ${ARRC} ${OBJS}
clean:	
		${RM} ${OBJS}
fclean: clean 
		${RM} ${ARRC}
		${RM} a.out
re: fclean all

.PHONY: all clean fclean re
