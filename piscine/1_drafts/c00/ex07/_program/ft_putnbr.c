/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:33:31 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/17 20:08:53 by jdiosdad         ###   ########.fr       */
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
	ft_putchar(nb);
}

int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(0);
	ft_putnbr(-256);
	ft_putnbr(2147483647);
	ft_putnbr(2147483648);
	ft_putnbr(-2147483648);
	ft_putnbr(-2147483649);
	return (0);
}

// int				int_max;
// int				int_min;
// unsigned int	uint_max;
// unsigned int	uint_min;

// int_max = 2147483647;
// int_min = -2147483648;
// uint_max = 4294967295;
// uint_min = 0;

//CHECK FOR OVERFLOW ???