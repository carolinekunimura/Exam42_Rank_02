/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 09:57:05 by ckunimur          #+#    #+#             */
/*   Updated: 2023/06/20 12:30:54 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	verify(char *str, char c, int i)
{
	int j = 0;
	int ver = 1;
	
	while (j <= i)
	{
		if (str[j] == c && ver == 1)
			ver = 0;
		else if (str[j] == c && ver == 0)
			return (1);
		j++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	
	if (argc == 3)
	{
		while (argv[1])
		{
			j = 0;
			while (argv[1][i] && argv[2][j])
			{
				if (!verify(argv[1], argv[1][i], i) && argv[1][i] == argv[2][j])
				{
					write(1, &argv[1][i], 1);
					i++;
				}
				j++;
			}
			if (!argv[1][i])
				break ;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
