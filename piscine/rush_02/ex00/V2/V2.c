/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   V2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:45:10 by cabdenne          #+#    #+#             */
/*   Updated: 2022/08/28 19:14:46 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

char	*ft_fill_tab(char *tab_fd_recup, int count)
{
	char	c;
	int	i;
	int fd_dictionnaire;

	i = 0;
	fd_dictionnaire = open("numbers.dict", O_RDONLY);
	while (read(fd_dictionnaire, &c, sizeof(c)))
	{
		if (i < count)
		{
			tab_fd_recup[i] = c;
			i++;
		}
	}
	ft_malloc_all(tab_fd_recup, count, 0, 0);
}

char	*ft_recup_size(void)
{
	int		fd_dictionnaire;
	int		count;
	char	c;
	char	*tab_fd_recup;

	count = 0;
	fd_dictionnaire = open("numbers.dict", O_RDONLY);
	if (fd_dictionnaire == -1)
		write (1, "Dict Error\n", 11);
	else
	{
		while (read(fd_dictionnaire, &c, sizeof(c)))
			count++;
	}
	close(fd_dictionnaire);
	tab_fd_recup = malloc(count * sizeof(char));
	if (!tab_fd_recup)
		return (NULL);
	ft_fill_tab(tab_fd_recup, count);
}

int	main(int argc, char *argv[])
{
	t_unint nb;
	struct tableaux		*tabs;

	tabs = ft_recup_size();
	nb = ft_atoi(argv[1]);
	
}