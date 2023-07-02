/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:03:58 by ckunimur          #+#    #+#             */
/*   Updated: 2023/06/28 16:37:49 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int	i = 0;
	unsigned int	result = tab[i];
	
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++; 
	}
	return (result);
}
