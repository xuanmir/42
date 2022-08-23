/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_clues_1_and_4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:15:32 by akurochk          #+#    #+#             */
/*   Updated: 2022/08/23 16:23:48 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	use_clue_4_vr(int district[4][4], int *input, int view)
{
	int	building;

	building = 4;
	while (input[view] && view <= 15)
	{
		if ((view >= 12 && view <= 15) && input[view] == 4)
		{
			while (building > 0)
			{
				district[view % 4][4 - building] = building;
				building--;
			}
		}
		view++;
	}
}

void	use_clue_4_vl(int district[4][4], int *input, int view)
{
	int	building;

	building = 0;
	while (input[view] && view <= 15)
	{
		if ((view >= 8 && view <= 11) && input[view] == 4)
		{
			while (building < 4)
			{
				district[view % 4][building] = building + 1;
				building++;
			}
		}
		view++;
	}
	use_clue_4_vr(district, input, view);
}

void	use_clue_4_vd(int district[4][4], int *input, int view)
{
	int	building;

	building = 4;
	while (input[view] && view <= 7)
	{
		if ((view >= 4 && view <= 7) && input[view] == 4)
		{
			while (building > 0)
			{
				district[4 - building][view % 4] = building;
				building--;
			}
		}
		view++;
	}
	use_clue_4_vl(district, input, view);
}

/*
If view = '4', put '1, 2, 3, 4' in that point_of_view
*/
void	use_clue_4_vu(int district[4][4], int *input)
{
	int	building;
	int	view;

	building = 0;
	view = 0;
	while (input[view] && view <= 3)
	{
		if ((view >= 0 && view <= 3) && input[view] == 4)
		{
			while (building < 4)
			{
				district[building][view] = building + 1;
				building++;
			}
		}
		view++;
	}
	use_clue_4_vd(district, input, view);
}

/*
If view = '1', put '4' in the district[][]
*/
void	use_clue_1(int district[4][4], int *input)
{
	int	view;

	view = 0;
	while (input[view])
	{
		if (input[view] == 1 && (view >= 0 && view <= 3))
			district[0][view] = 4;
		if (input[view] == 1 && (view >= 4 && view <= 7))
			district[3][view - 4] = 4;
		if (input[view] == 1 && (view >= 8 && view <= 11))
			district[view - 8][0] = 4;
		if (input[view] == 1 && (view >= 12 && view <= 15))
			district[view - 12][3] = 4;
		view++;
	}
	use_clue_4_vu(district, input);
}
