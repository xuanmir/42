/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 03:31:27 by xuanmir           #+#    #+#             */
/*   Updated: 2022/09/01 22:42:07 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest1[255] = "concatenation";
	char	dest2[255] = "concatenation";
	char	src1[] = "10101010abcdef";
	char	src2[] = "10101010abcdef";

	printf("Original: %lu %lu\n", strlen(dest1), strlen(dest2));
	printf("strcat: %s, ft_strcat: %s\n",
		strcat(dest1, src1), ft_strcat(dest2, src2));
	printf("Modified: %lu %lu\n", strlen(dest1), strlen(dest2));
	return (0);
}
