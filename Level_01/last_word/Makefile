# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 15:22:55 by ckunimur          #+#    #+#              #
#    Updated: 2023/06/28 15:25:32 by ckunimur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = last_word

SRC = last_word.c

FLAGS = -Wall -Wextra -Werror

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "FOR PONY" | cat -e

	./$(NAME) "this        ...       is sparta, then again, maybe    not" | cat -e

	./$(NAME) "   " | cat -e

	./$(NAME) "a" "b" | cat -e

	./$(NAME) "  lorem,ipsum  " | cat -e

fclean:
	rm -rf $(NAME)
