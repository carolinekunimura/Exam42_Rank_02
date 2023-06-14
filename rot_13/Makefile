NAME = rot_13

SRC = rot_13.c

FLAGS = -Wall -Werror -Wextra

test:
	gcc $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "abc"

	./$(NAME) "My horse is Amazing." | cat -e

	./$(NAME) "AkjhZ zLKIJz , 23y " | cat -e

	./$(NAME) | cat -e

	./$(NAME) "" | cat -e

fclean:
	rm -rf $(NAME)
