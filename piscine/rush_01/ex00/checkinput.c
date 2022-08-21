/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurochk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:04:47 by akurochk          #+#    #+#             */
/*   Updated: 2022/08/21 14:49:29 by akurochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	are_clues_correct(char *input)
{
	int	i;
	int	count_1;
	int	count_4;

	i = 0;
	count_1 = 0;
	count_4 = 0;
	while (input[i])
	{
		if (input[i] == '1')
			count_1++;
		if (input[i] == '4')
			count_4++;
		i++;
	}
	if (count_1 != 4 || count_4 > 2 || i != 31)
		return (0);
	return (1);
}

int	prepare_input(char *av, int *input)
{
	int	i;
	int	clue;

	i = 0;
	clue = 0;
	if (are_clues_correct(av) == 1)
	{
		while (av[i])
		{
			if ((av[i] >= '1' && av[i] <= '4')
				&& (av[i + 1] == ' ' || (av[i - 1] == ' ' && av[i + 1] == 0)))
			{
				input[clue] = av[i] - '0';
				clue++;
				i++;
			}
			if ((av[i] >= 9 && av[i] <= 13) || (av[i] == ' '))
				i++;
			else
				return (clue);
		}
		input[clue] = 0;
		return (clue);
	}
	return (0);
}
