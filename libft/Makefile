NAME = libft.a
SOURCES = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_substr.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	get_next_line_bonus.c \
	get_next_line_utils_bonus.c \
	ft_printf.c \
	ft_printf_supporter.c \
	ft_printf_converter.c	


MAKE = \
	Makefile \
	libft.h \


OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -fPIC
CC = cc

all: $(NAME)
$(NAME): $(OBJECTS)
	$(AR) -r $(NAME) $?
	chmod 777 $(NAME)
allc: all clean
%.o: %.c
	$(CC) -c $(CFLAGS) $?
clean:
	rm -f *:Zone.Identifier
	rm -f $(OBJECTS)
	rm -f *.so

fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all bonus clean fclean re
