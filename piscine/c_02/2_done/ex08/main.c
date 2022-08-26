/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 03:47:35 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/26 04:07:44 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[6];

	str[0] = 'a';
	str[1] = 'B';
	str[2] = 'c';
	str[3] = 'D';
	str[4] = 'e';
	str[5] = 'F';
	printf("Original: %s\n", str);
	ft_strlowcase(str);
	printf("Lowercased: %s\n", str);
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "aBcDeF";

// 	printf("Original: %s\n", str);
// 	ft_strlowcase(str);
// 	printf("Lowercased: %s\n", str);
// 	return (0);
// }
