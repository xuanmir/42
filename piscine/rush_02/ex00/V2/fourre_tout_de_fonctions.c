/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fourre_tout_de_fonctions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:02:52 by rciaze            #+#    #+#             */
/*   Updated: 2022/08/28 19:14:50 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

void	ft_put_str(char *str)
{
	int i;

	i = -1;
	while(str[++i])
		write (1, &str[i], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

t_unint	ft_atoi(char *str)
{
	unsigned __int128	nb;
	int i;

	i = 0;
	nb = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}

	return (nb);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);

}
