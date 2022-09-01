/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:16:58 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/09/01 18:53:10 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((s1[index] || s2[index]) && (index < n))
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		else if (s1[index] == s2[index])
			index++;
	}
	return (0);
}
