/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:48:02 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/25 13:33:36 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

/*
Display the pointer address (%p) stored in pointer nbr
Display the integer value (%i) found at the address stored in pointer nbr
*/
int	main(void)
{
	int	a;
	int	*nbr;

	nbr = &a;
	ft_ft(nbr);
	printf("Address stored in pointer: %p\n", nbr);
	printf("Value found at the address: %i\n", *nbr);
	return (0);
}
