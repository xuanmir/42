/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:41:10 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/24 20:18:48 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	iterator;

	iterator = 0;
	while (src[iterator])
	{
		dest = src;
		iterator++;
	}
	dest[iterator - 1] = '\0';
	return (dest);
}
