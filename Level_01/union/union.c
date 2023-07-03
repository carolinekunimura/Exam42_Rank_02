/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:11:18 by ckunimur          #+#    #+#             */
/*   Updated: 2023/07/02 19:19:05 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_char(char *str, char c, int index)
{
	int i = 0;

	while (i < index)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return (1);
}
int main(int argc, char **argv)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;

	if (argc == 3)
	{
		while (argv[1][i])
			i++;
		while (argv[2][j] != '\0')
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		argv[2][j - 1] = '\0';
		
		i--;
		while(k <= i)
		{
			if(check_char(argv[1], argv[1][k], k) == 1)
				write(1, &argv[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
	return (0);
}