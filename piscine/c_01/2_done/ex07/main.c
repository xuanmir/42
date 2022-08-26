/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:03:00 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/26 02:29:16 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[3];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	printf("Original: %i, %i, %i\n", tab[0], tab[1], tab[2]);
	ft_rev_int_tab(tab, 3);
	printf("Reversed: %i, %i, %i\n", tab[0], tab[1], tab[2]);
	return (0);
}

// int	main(void)
// {
// 	int	tab[] = {0, 1, 1, 2, 3, 5, 8};

// 	printf("Original: %i, %i, %i, %i, %i, %i, %i\n", tab[0],
// 		tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
// 	ft_rev_int_tab(tab, 7);
// 	printf("Reverse: %i, %i, %i, %i, %i, %i, %i\n", tab[0],
// 		tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
// 	return (0);
// }
