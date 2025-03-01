NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra -g

LIBFT_PATH = libft/
LIBFT_LIB = $(LIBFT_PATH)libft.a


CFILES = \
		moves.c\
		moves2.c\
		ksort.c\
		main.c\
		stack.c\
		p_s_ultis.c\



OBJECTS = $(CFILES:.c=.o)

all: subsystems $(NAME)

subsystems:
	@make -C $(LIBFT_PATH) all

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT_LIB) -o $(NAME)

clean:
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJECTS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all