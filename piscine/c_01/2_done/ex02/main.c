/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:06:35 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/25 13:55:08 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

// int	main(void)
// {
// 	int	var_a;
// 	int	var_b;
// 	int	*a;
// 	int	*b;

// 	a = &var_a;
// 	b = &var_b;
// 	*a = 01010;
// 	*b = 10101;
// 	ft_swap(a, b);
// 	printf("a = %d, b = %d\n", *a, *b);
// 	return (0);
// }

/*
Swap the values stored in var_a and var_b
Display the integer value (%i) stored in var_a
Display the integer value (%i) stored in var_b
*/
int	main(void)
{
	int	var_a;
	int	var_b;

	var_a = 123;
	var_b = 321;
	printf("Pre-swap a = %i\n", var_a);
	printf("Pre-swap b = %i\n", var_b);
	ft_swap(&var_a, &var_b);
	printf("Post-swap a = %i\n", var_a);
	printf("Post-swap b = %i\n", var_b);
	return (0);
}
