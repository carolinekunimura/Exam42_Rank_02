# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/02 19:35:10 by ckunimur          #+#    #+#              #
#    Updated: 2023/07/03 18:14:02 by ckunimur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wdmatch

SRC = wdmatch.c

FLAGS = -Wall -Werror -Wextra

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "faya" "fgvvfdxcacpolhyghbreda" | cat -e

	./$(NAME) "faya" "fgvvfdxcacpolhyghbred" | cat -e

	./$(NAME) "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e

	./$(NAME) "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e

	./$(NAME) | cat -e

fclean:
	rm -rf $(NAME)