# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 09:13:07 by ckunimur          #+#    #+#              #
#    Updated: 2023/06/20 09:52:04 by ckunimur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_strspn

SRC = ft_strspn.c

FLAGS = -Wall -Werror -Wextra

test:
	gcc -g $(SRC) $(FLAGS) -o $(NAME)

	./$(NAME) "aHello" "Hey" | cat -e

	./$(NAME) "aHello" "Hi" | cat -e

	./$(NAME) "Hello" "Ola" | cat -e

	./$(NAME) "Hello" "lo" | cat -e

	./$(NAME) "Hello" "lo" | cat -e

fclean:
	rm -rf $(NAME)