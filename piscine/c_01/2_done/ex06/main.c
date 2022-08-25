/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 04:29:57 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/25 14:00:56 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	strlen;

	strlen = ft_strlen("Here's a string. How long do you think it is?");
	printf("String contains %i characters.\n", strlen);
	strlen = ft_strlen("Here's another string. How long do you think it is?");
	printf("String contains %i characters.\n", strlen);
	strlen = ft_strlen("Bla");
	printf("String contains %i characters.\n", strlen);
	return (0);
}
