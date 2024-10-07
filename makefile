NAME =	libftprintf.a

SRCS =	ft_printf.c\
			ft_putXnbr.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_putxnbr.c\
			ft_putptr.c\
			ft_putPnbr.c

OBJECT = $(SRCS:.c=.o)


CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJECT)
	@ar rcs $(NAME) $(OBJECT)


bonus: $(OBJECTB)
	@ar rcs $(NAME) $(OBJECTB)


clean:
	@rm -f $(OBJECT) $(OBJECTB)


fclean: clean
	@rm -f $(NAME)


re: fclean all