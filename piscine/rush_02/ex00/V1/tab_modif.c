/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_modif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:01:02 by rciaze            #+#    #+#             */
/*   Updated: 2022/08/27 22:24:36 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

int	number_of_lines(void)
{
	int	i;
	int x;
	char *str;

	str = ft_temp_tab_size();
	x = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			x++;
		i++;
	}
	printf("%s\n%d", str, x);
	if (x)
		return (x);
	else
		return (0);
}

void	tab_malloc(struct s_Ligne	**tab, int nlines, char *str) // alors il faut encore allouer les valleurs (lignes) dans le 
//tableau cree ici. Une case de tab = une ligne. Il faut ensuite separer les valeurs dans ces cases et les transformer dans notre struct
//
{
	int i;
	int	j;
	int	x;

	i = 0;
	j = 0;
	x = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] <= 126)
			j++;
		else
		{
			tab[x] = malloc(j * sizeof(char));
			x++;
			j = 0;
		}
		i++;
	}
}
struct s_Ligne    **ft_split_wish(char *str)
{
	struct s_Ligne	**tab;


	tab = malloc(number_of_lines()* sizeof(char));
	if(!tab)
		return (NULL);

	
	return (tab);
}
