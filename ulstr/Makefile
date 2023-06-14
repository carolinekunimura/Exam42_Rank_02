NAME = ulstr

SRC = ulstr.c

FLAGS = -Wall -Werror -Wextra

test: 
	gcc $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e

	./$(NAME) "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e

	./$(NAME) "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e

	./$(NAME) | cat -e

fclean:
	rm -rf $(NAME)