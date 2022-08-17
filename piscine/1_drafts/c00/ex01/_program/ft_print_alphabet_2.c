/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:36:29 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/17 16:06:49 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	az;

	az = 'a';
	while (az <= 'z')
	{
		write(1, &az, 1);
		az++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
