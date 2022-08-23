/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_district.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:32:40 by akurochk          #+#    #+#             */
/*   Updated: 2022/08/23 15:44:52 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		prepare_variant(int district[4][4], int *input);

int		show_district(int district[4][4]);

void	use_clue_1(int district[4][4], int *input);

/*
Fill the array with '0'
*/
int	build_district(int *input)
{
	int	line;
	int	col;
	int	district[4][4];

	line = 0;
	while (line < 4)
	{
		col = 0;
		while (col < 4)
		{
			district[line][col] = 0;
			col++;
		}
		line++;
	}
	use_clue_1(district, input);
	if (prepare_variant(district, input) == 1)
		show_district(district);
	else
		write(1, "Error\n", 6);
	return (0);
}
