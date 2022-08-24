/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:48:02 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/24 03:22:25 by xuanmir          ###   ########.fr       */
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
	printf("%p\n", nbr);
	printf("%i\n", *nbr);
	return (0);
}
