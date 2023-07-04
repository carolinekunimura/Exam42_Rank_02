# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 18:54:43 by ckunimur          #+#    #+#              #
#    Updated: 2023/07/03 18:57:52 by ckunimur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = expand_str

SRC = expand_str.c

FLAGS = -Wall -Werror -Wextra

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "See? It's easy to print the same thing" | cat -e

	./$(NAME) " this        time it      will     be    more complex  " | cat -e

	./$(NAME) "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e

	./$(NAME) "" | cat -e

fclean:
	rm -rf $(NAME)