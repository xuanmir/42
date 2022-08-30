/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 05:38:12 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/30 06:01:12 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest1[19] = "concatenation";
	char	dest2[19] = "concatenation";
	char	src1[] = "10101";
	char	src2[] = "10101";
	unsigned int	nb1 = 3;
	unsigned int	nb2 = 3;

	printf("Original: %lu %lu\n", strlen(dest1), strlen(dest2));
	printf("strncat: %s, ft_strncat: %s\n",
		strncat(dest1, src1, nb1), ft_strncat(dest2, src2, nb2));
	printf("Modified: %lu %lu\n", strlen(dest1), strlen(dest2));
	return (0);
}
