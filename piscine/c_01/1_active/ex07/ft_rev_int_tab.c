/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:02:51 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/24 16:27:37 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	iterator;
	int	*reverse;

	iterator = 0;
	while (tab[iterator])
	{
		reverse[size - 1] = tab[iterator];
		size--;
	}
	*tab = *reverse;
}

// int	ft_strlen(char *str)
// {
// 	int	iterator;

// 	iterator = 0;
// 	while (str[iterator])
// 	{
// 		iterator++;
// 	}
// 	return (iterator);
// }

// void	ft_putstr(char *str)
// {
// 	int	iterator;

// 	iterator = 0;
// 	while (str[iterator])
// 	{
// 		write(1, &str[iterator], 1);
// 		iterator++;
// 	}
// }
