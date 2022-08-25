/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:03:00 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/25 18:20:28 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3};

	printf("Original: %i, %i, %i\n", tab[0], tab[1], tab[2]);
	ft_rev_int_tab(tab, 3);
	printf("Reversed: %i, %i, %i\n", tab[0], tab[1], tab[2]);
	return (0);
}
