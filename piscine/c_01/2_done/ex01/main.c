/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:39:44 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/25 13:25:19 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

/*
Display the pointer address (%p) stored in pointer ptr9
Display the integer value (%i) found at the address stored in pointer ptr9
*/
int	main(void)
{
	int	a;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	printf("Address stored in pointer: %p\n", ptr9);
	printf("Value found at the address: %i\n", *********ptr9);
	return (0);
}
