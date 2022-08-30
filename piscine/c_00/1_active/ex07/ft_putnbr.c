/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:33:31 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/30 23:23:20 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	int		index;
// 	char	*numstr;

// 	index = 0;
// 	numstr = nb + '0';
// 	while (numstr[index])
// 	{
// 		ft_putchar(numstr[index]);
// 		index++;
// 	}
// }

void	ft_putnbr(int nb)
{
	// unsigned int	n;

	// n = nb;
	// ft_putchar(nb);
	write(1, &nb, 1);
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
