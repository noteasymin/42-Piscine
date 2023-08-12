CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

HEAD = ./includes/

NAME = libft.a

AR = ar rcs

RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c /includes/ft.h
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
