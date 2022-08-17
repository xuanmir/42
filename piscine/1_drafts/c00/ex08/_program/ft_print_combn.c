/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:39:20 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/17 17:49:31 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	if (0 < n && n < 10)
		write(1, &n, 1);
}

int	main(void)
{
	ft_print_combn(2);
	ft_print_combn(14);
	ft_print_combn(0);
	ft_print_combn(-1);
	return (0);
}
