/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 09:06:56 by ckunimur          #+#    #+#             */
/*   Updated: 2023/06/20 09:52:22 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const	char *s, const char *accept)
{
	size_t i = 0;
	size_t j = 0;

	while (*s)
	{
		j = 0;
		while (*s == accept[j])
		{
			i++;
			j++;
			s++;
		}
		return (i);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%zu\n", ft_strspn(argv[1], argv[2]));
	return (0);
}
