/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 03:29:28 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/24 04:01:37 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

/*
Display the integer value (%i) found at the address stored in pointer a
Display the integer value (%i) found at the address stored in pointer b
*/
int	main(void)
{
	int	arg1;
	int	arg2;
	int	*a;
	int	*b;

	a = &arg1;
	b = &arg2;
	*a = 36;
	*b = 24;
	ft_ultimate_div_mod(a, b);
	printf("Division: %i\n", *a);
	printf("Remainder: %i\n", *b);
	return (0);
}
