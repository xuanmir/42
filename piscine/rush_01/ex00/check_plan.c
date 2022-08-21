/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_plan.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurochk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:34:08 by akurochk          #+#    #+#             */
/*   Updated: 2022/08/21 10:59:17 by akurochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_up(int district[4][4], int col, int num_of_buildings)
{
	int	i;
	int	highest;
	int	count;

	i = 0;
	count = 1;
	highest = district[i][col];
	while (i < 4)
	{
		if (highest < district[i][col])
		{
			count++;
			highest = district[i][col];
		}
		i++;
	}
	if (count == num_of_buildings)
		return (1);
	return (0);
}

int	check_view_down(int district[4][4], int col, int num_of_buildings)
{
	int	i;
	int	highest;
	int	count;

	i = 3;
	count = 1;
	highest = district[i][col];
	while (i >= 0)
	{
		if (highest < district[i][col])
		{
			count++;
			highest = district[i][col];
		}
		i--;
	}
	if (count == num_of_buildings)
		return (1);
	return (0);
}

int	check_view_left(int district[4][4], int line, int num_of_buildings)
{
	int	i;
	int	highest;
	int	count;

	i = 0;
	count = 1;
	highest = district[line][i];
	while (i < 4)
	{
		if (highest < district[line][i])
		{
			count++;
			highest = district[line][i];
		}
		i++;
	}
	if (count == num_of_buildings)
		return (1);
	return (0);
}

int	check_view_right(int district[4][4], int line, int num_of_buildings)
{
	int	i;
	int	highest;
	int	count;

	i = 3;
	count = 1;
	highest = district[line][i];
	while (i >= 0)
	{
		if (highest < district[line][i])
		{
			count++;
			highest = district[line][i];
		}
		i--;
	}
	if (count == num_of_buildings)
		return (1);
	return (0);
}

int	is_district_correct(int district[4][4], int *input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (i >= 0 && i <= 3)
			if (!check_view_up(district, i, input[i]))
				return (0);
		if (i >= 4 && i <= 7)
			if (!check_view_down(district, i - 4, input[i]))
				return (0);
		if (i >= 8 && i <= 11)
			if (!check_view_left(district, i - 8, input[i]))
				return (0);
		if (i >= 12 && i <= 15)
			if (!check_view_right(district, i - 12, input[i]))
				return (0);
		i++;
	}
	return (1);
}
