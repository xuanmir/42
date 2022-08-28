/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:21:57 by daumis            #+#    #+#             */
/*   Updated: 2022/08/27 21:32:45 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	number_of_lines(char *str)
{
	int	i;
	int x;

	x = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			x++;
		i++;
	}
	return (x);
}

char    **ft_split(char *str, char *sep)
{
	char **arr;

	arr = malloc(number_of_lines(str) * sizeof(char));
	if(!arr)
		return (NULL);
	printf("%d",number_of_lines(str));
	return (arr);
}

