/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:35:39 by ckunimur          #+#    #+#             */
/*   Updated: 2023/03/22 16:24:21 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main()
{
	int	i;

	i = 0;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
	i++;
	}
	return (0);
}
