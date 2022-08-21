/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tracking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurochk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:12:02 by akurochk          #+#    #+#             */
/*   Updated: 2022/08/21 14:48:58 by akurochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_district_correct(int district[4][4], int *input);

int	is_place_empty(int district[4][4], int *line, int *col)
{
	*line = 0;
	while (*line < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (district[*line][*col] == 0)
				return (1);
			*col = *col + 1;
		}
		*line = *line + 1;
	}
	return (0);
}

int	is_possible_to_put_in_line(int district[4][4], int line, int building)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (district[line][col] == building)
			return (0);
		col++;
	}
	return (1);
}

int	is_possible_to_put_in_col(int district[4][4], int col, int building)
{
	int	line;

	line = 0;
	while (line < 4)
	{
		if (district[line][col] == building)
			return (0);
		line++;
	}
	return (1);
}

int	is_position_is_possible(int district[4][4], int line, int col, int building)
{
	if (is_possible_to_put_in_line(district, line, building)
		&& is_possible_to_put_in_col(district, col, building)
		&& district[line][col] == 0)
		return (1);
	return (0);
}

int	prepare_variant(int district[4][4], int *input)
{
	int	line;
	int	col;
	int	building;

	building = 1;
	if (is_place_empty(district, &line, &col) == 0
		&& is_district_correct(district, input) == 1)
		return (1);
	while (building <= 4)
	{
		if (is_position_is_possible(district, line, col, building))
		{	
			district[line][col] = building;
			if (prepare_variant(district, input) == 1)
				return (1);
			district[line][col] = 0;
		}
		building++;
	}
	return (0);
}
