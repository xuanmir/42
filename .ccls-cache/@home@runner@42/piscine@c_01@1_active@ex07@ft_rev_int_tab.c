/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:02:51 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/25 15:50:47 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	reverse[size];
	int	index;
	// int	*reverse;

	// index = 0;
	// while (tab[index] != '\0')
	// {
	// 	size--;
	// 	reverse[size] = tab[index];
	// 	index++;
	// }
	// *tab = *reverse;

	// index = 0;
	// while (tab[index])
	// {
	// 	if (tab[index])
	// 	{
	// 		reverse[size - 1] = tab[index];
	// 		size--;
	// 	}
	// 	index++;
	// }
	// reverse[size - 1] = tab[index];
	// *tab = *reverse;

	index = 0;
	while (reverse[index] != '\0')
	{
		reverse[index] = tab[size - 1];
		index++;
		size--;
	}
	*tab = *reverse;
	// ft_swap(tab, reverse);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}