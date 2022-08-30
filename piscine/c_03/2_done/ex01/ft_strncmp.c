/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:05:04 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/30 02:28:34 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((s1[index] || s2[index]) && (index < n))
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (-1);
		while ((s1[index] || s2[index]) && (s1[index] == s2[index]))
			index++;
	}
	return (0);
}
