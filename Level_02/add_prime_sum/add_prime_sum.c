/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:32:08 by ckunimur          #+#    #+#             */
/*   Updated: 2023/06/30 19:21:42 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int result = 0;
	while(*str)
		result = result * 10 + (*str++ - 48);
	return(result);
}

int	is_prime(int num)
{
	int i = 2;
	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return(1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n);
	char digit = n % 10 + '0';
	write (1, &digit, 1);
}

int	main(int argc, char **argv)
{
	int sum = 0;
	if (argc == 2)
	{
		int nbr = ft_atoi(argv[1]);
		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
	ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}