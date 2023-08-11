SRCS = ./srcs/calc.c ./srcs/str.c ./srcs/do-op.c ./srcs/main.c

OBJS = $(SRCS:.c=.o)

HEAD = ./includes/

NAME = do-op

RM = rm -f

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

%.o: %.c ./includes/ft.h
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	   $(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
