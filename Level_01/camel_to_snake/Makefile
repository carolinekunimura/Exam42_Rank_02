NAME = camel_to_snake

SRC = camel_to_snake.c

FLAGS = -Wall -Werror -Wextra

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "hereIsACamelCaseWord"

	./$(NAME) "helloWorld" | cat -e

	./$(NAME) | cat -e

fclean:
	rm -rf $(NAME)