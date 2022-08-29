/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:58:06 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/29 11:52:20 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%s\n", ft_strcmp("String 1", "String 2"));
	printf("%s\n", ft_strcmp("GM", "GN"));
	return (0);
}
