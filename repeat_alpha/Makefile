NAME = repeat_alpha

SRC = repeat_alpha.c

FLAGS = -Wall -Werror -Wextra

test:
	gcc $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "abc"

	./$(NAME) "Alex." | cat -e

	./$(NAME) 'abacadaba 42!' | cat -e

	./$(NAME) | cat -e

	./$(NAME) "" | cat -e

fclean:
	rm -rf $(NAME)