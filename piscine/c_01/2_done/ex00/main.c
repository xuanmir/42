/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:48:02 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/23 23:40:26 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

/*
Display the value and the address
*/
int	main(void)
{
	int	a;
	int	*nbr;

	nbr = &a;
	ft_ft(nbr);
	printf("%d\n", *nbr);
	printf("%p\n", nbr);
	return (0);
}
