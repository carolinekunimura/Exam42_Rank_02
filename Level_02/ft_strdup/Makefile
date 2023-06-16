NAME = ft_strdup

SRC = ft_strdup.c

FLAGS = -Wall -Wextra -Werror

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "banana" | cat -e

	./$(NAME) 4758 | cat -e

	./$(NAME) | cat -e

fclean:
	rm -rf $(NAME)
