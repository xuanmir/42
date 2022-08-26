/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 04:08:41 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/26 04:10:42 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

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
	ft_strupcase(str);
	printf("Uppercased: %s\n", str);
	return (0);
}
