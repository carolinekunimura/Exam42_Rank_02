NAME = alpha_mirror

SRC = alpha_mirror.c

FLAGS = -Wall -Wextra -Werror

test:
	gcc $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "abc"

	./$(NAME) "My horse is Amazing." | cat -e

	./$(NAME) | cat -e

fclean:
	rm -rf $(NAME)