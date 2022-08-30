/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:18:26 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/30 20:18:45 by jdiosdad         ###   ########.fr       */
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
