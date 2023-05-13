/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:31:39 by ckunimur          #+#    #+#             */
/*   Updated: 2023/05/13 11:44:48 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	
	while(s1[i])
		s2[i++] = s1[i++];
	s2[i++] = '\0';
}
