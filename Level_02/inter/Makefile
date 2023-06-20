# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 09:54:04 by ckunimur          #+#    #+#              #
#    Updated: 2023/06/20 10:03:35 by ckunimur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = inter

SRC = inter.c

FLAGS = -Wall -Werror -Wextra

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e

	./$(NAME) ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e

	./$(NAME) "rien" "cette phrase ne cache rien" | cat -e

	./$(NAME) | cat -e

fclean:
	rm -rf $(NAME)
