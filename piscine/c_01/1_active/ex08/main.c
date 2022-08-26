/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 02:59:52 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/26 03:09:41 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[7];

	tab[0] = 8;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 5;
	tab[4] = 1;
	tab[5] = 0;
	tab[6] = 1;
	printf("Original: %i, %i, %i, %i, %i, %i, %i\n",
		tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
	ft_sort_int_tab(tab, 7);
	printf("Sorted: %i, %i, %i, %i, %i, %i, %i\n",
		tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
	return (0);
}
