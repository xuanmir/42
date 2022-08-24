/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:03:00 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/24 19:36:32 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

// int	ft_strlen(char *str)
// {
// 	int	iterator;

// 	iterator = 0;
// 	while (str[iterator])
// 	{
// 		iterator++;
// 	}
// 	return (iterator);
// }

int	main(void)
{
	char	str[] = "Reverse";

	ft_rev_int_tab(str, 8);
	printf("%s", tab);
	return (0);
}
