/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_tab_management.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:26:22 by cabdenne          #+#    #+#             */
/*   Updated: 2022/08/28 19:14:47 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

char *ft_strdup(char *src, int i)
{
	int	j;
	char *dest;
	
	j = 0;
	dest = (char *) malloc(sizeof(char) * ft_strlen(src));
	if (!dest)
		return (NULL);
	while (src[i] && src[i] != '\n')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return(dest);
}

int	ft_malloc_all(char *tab_fd_recup, int count, int fd_cntr, int iarr_cntr)
{
	unsigned __int128	*number_array;
	char			*temp_int_array;
	char			**string_array;
	struct tableaux		*tabs;
	int	j;

	j = 0;
	tabs = malloc(count * sizeof(struct tableaux));
	while (j < count)
	{	
		tabs[j].alias = malloc(count * sizeof(char));
		tabs[j].nb = malloc(count * sizeof(t_unint));
	}
	temp_int_array =  malloc(500 * sizeof(char));
	

	if (!temp_int_array || !string_array || !number_array)
		return (0);
	ft_split_wish(tab_fd_recup, tabs, temp_int_array);
	return (1);
}

struct tableaux		*ft_split_wish(char *tfd_a,struct tableaux *tabs, char *t_i_a)
{
	int	j;
	int	fd_counter;
	int	int_array_counter;

	int_array_counter = -1;
	fd_counter = -1;
	j = 0;
	while (tfd_a[++fd_counter])
	{
		while (tfd_a[fd_counter] >= '0' && tfd_a[fd_counter] <= '9')
			t_i_a[++int_array_counter] = tfd_a[fd_counter++];
		tabs[j].nb = ft_atoi(t_i_a);
		int_array_counter = 499;
		while (int_array_counter >= 0)
			t_i_a[int_array_counter--] = 0;
		while (tfd_a[fd_counter] == ' ' || tfd_a[fd_counter] == ':')
			fd_counter++;
		tabs[j].alias = ft_strdup(tfd_a, fd_counter);
		while (tfd_a[fd_counter] != '\n')
			fd_counter++;
		j++;
	}
	return(tabs);
}