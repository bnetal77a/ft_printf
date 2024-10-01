CC = gcc
AR = ar -rc
RM = rm -f
FLAGS = -Wall -Wextra -Werror -I ./
FILES = ft_printf.c ft_putaddr.c ft_putchar.c ft_putnbr.c \
            ft_putnbr_base.c ft_putstr.c ft_putnbr_unsigned.c
OBJS = $(FILES:%.c=%.o)
LIBNAME = printf.a
RN_LIB = ranlib

all: $(LIBNAME)

$(LIBNAME): $(OBJS)
	$(AR) $(LIBNAME) $(OBJS)
	$(RN_LIB) $(LIBNAME)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIBNAME)

re: fclean all

.PHONY: all clean fclean re
