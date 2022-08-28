/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:21:57 by daumis            #+#    #+#             */
/*   Updated: 2022/08/27 22:24:37 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++; 
	return (i);
}

char	*ft_temp_tab(char *temp_tab, int tab_size)
{
	int		fd_dictionnaire;
	char	c;
	int		j;


	j = 0;
	fd_dictionnaire = open("numbers.dict", O_RDONLY);
	if (fd_dictionnaire == -1)
		write (1, "Dict Error\n", 11);
	else 
	{
		while (read(fd_dictionnaire, &c, sizeof(c)))
		{
			if (j < tab_size)
			{
				temp_tab[j] = c;
				j++;
			}
		}
	}
	close(fd_dictionnaire);
	return (temp_tab);

}

char *ft_temp_tab_size(void)
{
	int		fd_dictionnaire;
	int		j;
	char	c;
	char	*temp_tab;

	j = 0;
	fd_dictionnaire = open("numbers.dict", O_RDONLY);
	if (fd_dictionnaire == -1)
		write (1, "Dict Error\n", 11);
	else 
	{
		while (read(fd_dictionnaire, &c, sizeof(c)))
			j++;
	}
	close(fd_dictionnaire);
	temp_tab = malloc(j * sizeof(char));
	if (!temp_tab)
		return (NULL);
	else
		ft_temp_tab(temp_tab, j);
}
