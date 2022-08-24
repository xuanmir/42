/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 04:05:31 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/24 15:28:56 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator])
	{
		write(1, &str[iterator], 1);
		iterator++;
	}
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int	iterator;

// 	iterator = 0;
// 	while (str[iterator])
// 	{
// 		ft_putchar(str[iterator]);
// 		iterator++;
// 	}
// }
