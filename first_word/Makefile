# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/13 11:48:27 by ckunimur          #+#    #+#              #
#    Updated: 2023/05/13 11:53:06 by ckunimur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = first_word

SRC = first_word.c

FLAGS = -Wall -Werror -Wextra

test:
	gcc $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "FOR PONY" | cat -e

	./$(NAME) "this        ...    is sparta, then again, maybe    not" | cat -e

	./$(NAME) "   " | cat -e

	./$(NAME) a" "b" | cat -e

	./$(NAME) "  lorem,ipsum  " | cat -e
