/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:52:02 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/18 18:38:52 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(0);
	ft_putnbr(-256);
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
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

// ARE SUPPOSED TO CHECK FOR OVERFLOW ???
