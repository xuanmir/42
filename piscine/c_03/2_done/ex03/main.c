/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 05:38:12 by xuanmir           #+#    #+#             */
/*   Updated: 2022/09/01 19:08:00 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest1[18] = "concatenation";
	char	dest2[18] = "concatenation";
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
