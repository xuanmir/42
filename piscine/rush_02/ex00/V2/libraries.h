/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libraries.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:35:02 by rciaze            #+#    #+#             */
/*   Updated: 2022/08/28 19:14:49 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARIES_H
# define LIBRARIES_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

typedef unsigned __int128	t_unint;

char *ft_temp_tab_size(void);

int	number_of_lines(void);

struct tableaux	*ft_split_wish(char *tfd_a,struct tableaux *tabs, char *t_i_a);

int	ft_malloc_all(char *tab_fd_recup, int count, int fd_cntr, int iarr_cntr);

int	ft_strcmp(char *s1, char *s2);

char *ft_strdup(char *src, int i);

t_unint	ft_atoi(char *str);

int	ft_strlen(char *str);

void	ft_put_str(char *str);

#endif

typedef int t_bool;

struct tableaux
{
	struct tableaux *next;
	t_unint nb;
	char	*alias;
};
