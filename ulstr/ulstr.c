/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 10:11:29 by ckunimur          #+#    #+#             */
/*   Updated: 2023/05/13 10:35:07 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i = 0;
	
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] > 64 && argv[1][i] < 91)
			{
				argv[1][i] += 32;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] > 96 && argv[1][i] < 123)
			{
				argv[1][i] -= 32;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
