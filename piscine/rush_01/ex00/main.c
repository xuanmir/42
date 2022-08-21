/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurochk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 08:57:50 by akurochk          #+#    #+#             */
/*   Updated: 2022/08/21 11:58:01 by akurochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	build_district(int *input);

int	prepare_input(char *av, int *input);

int	main(int ac, char **av)
{
	int	input[17];

	if (ac == 2)
	{
		if (prepare_input(av[1], input) == 16)
			build_district(input);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
