/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:58:06 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/30 02:41:38 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("strcmp: %i, ft_strcmp: %i\n",
		strcmp("200", "0"), ft_strcmp("200", "0"));
	printf("strcmp: %i, ft_strcmp: %i\n",
		strcmp("Omega", "Alpha"), ft_strcmp("Omega", "Alpha"));
	printf("strcmp: %i, ft_strcmp: %i\n",
		strcmp("1234", "123"), ft_strcmp("1234", "123"));
	printf("strcmp: %i, ft_strcmp: %i\n",
		strcmp("42", "42"), ft_strcmp("42", "42"));
	printf("strcmp: %i, ft_strcmp: %i\n",
		strcmp("Alpha", "Alpha"), ft_strcmp("Alpha", "Alpha"));
	printf("strcmp: %i, ft_strcmp: %i\n",
		strcmp("", ""), ft_strcmp("", ""));
	printf("strcmp: %i, ft_strcmp: %i\n",
		strcmp("String 1", "String 2"), ft_strcmp("String 1", "String 2"));
	printf("strcmp: %i, ft_strcmp: %i\n",
		strcmp("GM", "GN"), ft_strcmp("GM", "GN"));
	printf("strcmp: %i, ft_strcmp: %i\n",
		strcmp("Abc", "Abcd"), ft_strcmp("Abc", "Abcd"));
	return (0);
}
