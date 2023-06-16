NAME = do_op

SRC = do_op.c

FLAGS = -Wall -Wextra -Werror

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "123" "*" 456 | cat -e

	./$(NAME) "9828" "/" 234 | cat -e

	./$(NAME) "1" "+" "-43" | cat -e

	./$(NAME) | cat -e

fclean:
	rm -rf $(NAME)