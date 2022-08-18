/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:39:20 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/18 19:14:46 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nums(int nums)
{
	ft_putchar((nums / 10) + '0');
	ft_putchar((nums % 10) + '0');
	if (nums < 9)
		write(1, ", ", 2);
	else
		ft_putchar('\n');
}

void	ft_print_combn(int n)
{
	if (0 < n && n < 10)
		ft_print_nums(n);
	else
		write(1, "Please enter a number between 1 and 9.\n", 39);
}

// n1
// n2
// n3
// n4
// n5
// n6
// n7
// n8
// n9
