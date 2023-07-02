# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 18:32:19 by ckunimur          #+#    #+#              #
#    Updated: 2023/06/30 19:23:02 by ckunimur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = add_prime_sum

SRC = add_prime_sum.c

FLAGS = -Wall -Werror -Wextra

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) 5 | cat -e

	./$(NAME) 7 | cat -e

	./$(NAME) | cat -e

fclean:
	rm -rf $(NAME)