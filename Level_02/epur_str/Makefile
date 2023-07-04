# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 18:30:22 by ckunimur          #+#    #+#              #
#    Updated: 2023/07/03 18:32:08 by ckunimur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = epur_str

SRC = epur_str.c

FLAGS = -Wall -Wextra -Werror

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "See? It's easy to print the same thing" | cat -e

	./$(NAME) " this        time it      will     be    more complex  . " | cat -e

	./$(NAME) "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e

	./$(NAME) "" | cat -e

fclean:
	rm -rf $(NAME)