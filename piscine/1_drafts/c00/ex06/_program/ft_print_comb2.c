/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:43:21 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/17 17:22:23 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_print_comb2(void)
// {
// 	int	ab;
// 	int	cd;

// 	ab = 00;
// 	while (ab <= 98)
// 	{
// 		cd = 01;
// 		while (cd <= 99)
// 		{
// 			write(1, &ab, 2);
// 			write(1, " ", 1);
// 			write(1, &cd, 2);
// 			write(1, ", ", 1);
// 			cd++;
// 		}
// 		ab++;
// 	}
// }

void	ft_print_nums(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (c < '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '1';
				while (d <= '9')
				{
					ft_print_nums(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
