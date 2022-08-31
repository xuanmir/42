/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:13:01 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/31 23:48:50 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[-1234]\n",
		atoi("  ---+--+1234ab567"), ft_atoi("  ---+--+1234ab567"));
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[0]\n",
		atoi(""), ft_atoi(""));
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[505]\n",
		atoi("+-+-+505\n"), ft_atoi("+-+-+505\n"));
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[0]\n",
		atoi("\t\n a "), ft_atoi("\t\n a "));
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[42]\n",
		atoi("42++"), ft_atoi("42++"));
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[0]\n",
		atoi(" +- 3"), ft_atoi(" +- 3"));
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[2022]\n",
		atoi("2022-08-31"), ft_atoi("2022-08-31"));
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[8]\n",
		atoi("08/31/2022"), ft_atoi("08/31/2022"));
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[101]\n",
		atoi("--101abcdef"), ft_atoi("--101abcdef"));
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[-101]\n",
		atoi("-+-+-101"), ft_atoi("-+-+-101"));
	printf("\tatoi:[%i]\n\tft_atoi:[%i]\n\tcorrect_answer:[12358]\n",
		atoi("\v\t12358\n\tfi,fibo,nacci\v"), ft_atoi("\v\t12358\n\tfi,fibo,nacci\v"));
	return (0);
}
