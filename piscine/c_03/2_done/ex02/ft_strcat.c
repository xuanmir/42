/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 03:33:12 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/30 05:39:14 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	destlen;
	int	srclen;

	index = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	while (index < (destlen + srclen))
	{
		dest[destlen + index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
