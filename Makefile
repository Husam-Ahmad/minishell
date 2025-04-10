NAME = minishell
CC = clang
CFLAGS = -Wall -Werror -Wall 
LIBFT = -L libft -LIBFT
HEADER = minishell.h
SRC = minishell.c
OBJ = $(SRC:c=o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

%.o: %.c 
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@make clean -C libft/
	@rm -f $(OBJ)

fclean:
	@make clean -C libft/
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@rm -f *:Zone.Identifier

re: fclean all

.PHONY: clean fclean re 

