/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:33:31 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/31 14:45:00 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

// if (-10 < n && n < 10)
// {
// 	...
// }

// n % 10
// (n / 10) % 10
// ((n /10) / 10) % 10
// etc

// int				int_max;
// int				int_min;
// unsigned int	uint_max;
// unsigned int	uint_min;

// int_max = 2147483647;
// int_min = -2147483648;
// uint_max = 4294967295;
// uint_min = 0;

// ARE SUPPOSED TO CHECK FOR OVERFLOW ???

// https://wuhrr.wordpress.com/2007/11/09/how-to-print-a-long-integer-using-only-putchar/
