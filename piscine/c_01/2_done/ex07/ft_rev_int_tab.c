/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:02:51 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/26 03:03:20 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	tmp;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		tmp = tab[first];
		tab[first] = tab[last];
		tab[last] = tmp;
		first++;
		last--;
	}
}

// void	ft_rev_int_tab(int *tab, int size)
// {
// 	int	index;
// 	int	*reverse;

// 	index = 0;
// 	reverse = &size;
// 	while (tab[index] != '\0')
// 	{
// 		size--;
// 		reverse[size] = tab[index];
// 		index++;
// 	}
// 	*tab = *reverse;
// }

// void	ft_rev_int_tab(int *tab, int size)
// {
// 	int	reverse[size];
// 	int	index;

// 	index = 0;
// 	while (tab[index])
// 	{
// 		if (tab[index])
// 		{
// 			reverse[size - 1] = tab[index];
// 			size--;
// 		}
// 		index++;
// 	}
// 	reverse[size - 1] = tab[index];
// 	*tab = *reverse;
// }

// void	ft_rev_int_tab(int *tab, int size)
// {
// 	int	reverse[size];
// 	int	index;

// 	index = 0;
// 	while (reverse[index] != '\0')
// 	{
// 		reverse[index] = tab[size - 1];
// 		index++;
// 		size--;
// 	}
// 	*tab = *reverse;
// }

// void	ft_swap(int *a, int *b)
// {
// 	int	temp;

// 	temp = *b;
// 	*b = *a;
// 	*a = temp;
// }
