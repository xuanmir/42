/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 03:31:27 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/30 05:34:43 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest1[17] = "concatenation";
	char	dest2[17] = "concatenation";
	char	src1[] = "101";
	char	src2[] = "101";

	printf("Original: %lu %lu\n", strlen(dest1), strlen(dest2));
	printf("strcat: %s, ft_strcat: %s\n",
		strcat(dest1, src1), ft_strcat(dest2, src2));
	printf("Modified: %lu %lu\n", strlen(dest1), strlen(dest2));
	return (0);
}
