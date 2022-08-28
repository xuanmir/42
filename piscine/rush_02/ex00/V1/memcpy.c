/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:46:07 by daumis            #+#    #+#             */
/*   Updated: 2022/08/27 12:40:45 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	custom_memcpy(void *dest, void *src, size_t n)
{
	int		i;
	char	*src_char;
	char	*dest_char;

	src_char = (char *)src;
	dest_char = (char *)dest;
	i = 0;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
}

int	main(char *src, char *dest, int lensrc)
{
	lensrc = ft_strlen(src);
	dest = malloc(lensrc * sizeof(char));
	if (!dest)
		return (0);
	custom_memcpy(dest, src, lensrc + 1);
}
