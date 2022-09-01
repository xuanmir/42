/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 03:33:12 by xuanmir           #+#    #+#             */
/*   Updated: 2022/09/01 22:41:38 by jdiosdad         ###   ########.fr       */
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

// char	*ft_strcat(char *dest, char *src)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	if (!dest || !src)
// 		return (dest);
// 	while (dest[i] != '\0')
// 		i++;
// 	while (src[j] != '\0')
// 	{
// 		dest[i + j] = src[j];
// 		j++;
// 	}
// 	dest[i + j] = '\0';
// 	return (dest);
// }
