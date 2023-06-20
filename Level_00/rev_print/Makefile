NAME = rev_print

SRC = rev_print.c

FLAGS = -Wall -Wextra -Werror

test:
	gcc $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "zaz" | cat -e

	./$(NAME) "dub0 a POIL" | cat -e

	./$(NAME) | cat -e

fclean:
	rm -rf $(NAME)
