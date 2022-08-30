/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 05:38:21 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/30 05:59:21 by xuanmir          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	index;
	unsigned int	srcindex;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	index = destlen;
	srcindex = 0;
	while ((index < (destlen + srclen)) && (srcindex < nb))
	{
		dest[index] = src[srcindex];
		index++;
		srcindex++;
	}
	dest[index] = '\0';
	return (dest);
}
