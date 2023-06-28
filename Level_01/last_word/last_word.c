/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:08:29 by ckunimur          #+#    #+#             */
/*   Updated: 2023/06/28 15:58:09 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char	*str)
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1;
		i++;
		
	}
	while (str[j] >= 33 && str[j] <= 126)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}