/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:37:52 by ckunimur          #+#    #+#             */
/*   Updated: 2023/07/03 18:11:34 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (argc == 3)
	{
		while (argv[1][i])
			i++;
		while (argv[2][j])
		{
			if (argv[2][j] == argv[1][k])
				k++;
			j++;
		}
		if (i == k)
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}