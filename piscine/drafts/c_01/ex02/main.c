/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:06:35 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/19 14:48:46 by jdiosdad         ###   ########.fr       */
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

int	main(void)
{
	int	var_a;
	int	var_b;

	var_a = 123;
	var_b = 321;
	ft_swap(&var_a, &var_b);
	printf("a = %d, b = %d\n", var_a, var_b);
	return (0);
}
