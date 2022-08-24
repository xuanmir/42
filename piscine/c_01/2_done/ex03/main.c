/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:50:24 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/24 03:22:05 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

/*
Display the integer value (%i) found at the address stored in pointer div
Display the integer value (%i) found at the address stored in pointer mod
*/
int	main(void)
{
	int	division;
	int	remainder;
	int	*div;
	int	*mod;

	div = &division;
	mod = &remainder;
	ft_div_mod(36, 24, div, mod);
	printf("Division: %i\n", *div);
	printf("Remainder: %i\n", *mod);
	return (0);
}
