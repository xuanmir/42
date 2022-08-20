/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:43:21 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/18 19:14:50 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nums(int ab, int cd)
{
	ft_putchar((ab / 10) + '0');
	ft_putchar((ab % 10) + '0');
	write(1, " ", 1);
	ft_putchar((cd / 10) + '0');
	ft_putchar((cd % 10) + '0');
	if (ab < 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	ab;
	int	cd;

	ab = 0;
	while (ab <= 98)
	{
		cd = ab + 1;
		while (cd <= 99)
		{
			ft_print_nums(ab, cd);
			cd++;
		}
		ab++;
	}
}
