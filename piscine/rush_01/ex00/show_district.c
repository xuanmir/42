/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_district.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurochk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:50:10 by akurochk          #+#    #+#             */
/*   Updated: 2022/08/21 11:54:41 by akurochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	show_district(int district[4][4])
{
	int	line;
	int	col;

	line = 0;
	while (line < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(district[line][col] + '0');
			if (col < 3)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}
