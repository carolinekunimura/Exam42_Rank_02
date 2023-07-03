# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/02 18:09:09 by ckunimur          #+#    #+#              #
#    Updated: 2023/07/02 18:11:10 by ckunimur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = union

SRC = union.c

FLAGS = -Wall -Werror -Wextra

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e

	./$(NAME) ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e

	./$(NAME) "rien" "cette phrase ne cache rien" | cat -e

	./$(NAME) | cat -e

	./$(NAME) "rien" | cat -e

fclean:
	rm -rf $(NAME)
