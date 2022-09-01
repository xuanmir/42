/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:03:21 by xuanmir           #+#    #+#             */
/*   Updated: 2022/09/01 17:42:42 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("strncmp: %i, ft_strncmp: %i\n",
		strncmp("200", "0", 3), ft_strncmp("200", "0", 3));
	printf("strncmp: %i, ft_strncmp: %i\n",
		strncmp("Omega", "Alpha", 3), ft_strncmp("Omega", "Alpha", 3));
	printf("strncmp: %i, ft_strncmp: %i\n",
		strncmp("Test2", "Test1", 5), ft_strncmp("Test2", "Test1", 5));
	printf("strncmp: %i, ft_strncmp: %i\n",
		strncmp("42", "42", 32), ft_strncmp("42", "42", 32));
	printf("strncmp: %i, ft_strncmp: %i\n",
		strncmp("One", "Two", 0), ft_strncmp("One", "Two", 0));
	printf("strncmp: %i, ft_strncmp: %i\n",
		strncmp("GM", "GN", 1), ft_strncmp("GM", "GN", 1));
	printf("strncmp: %i, ft_strncmp: %i\n",
		strncmp("GM", "GN", 4), ft_strncmp("GM", "GN", 4));
	printf("strncmp: %i, ft_strncmp: %i\n",
		strncmp("Str 1", "Str 2", 8), ft_strncmp("Str 1", "Str 2", 8));
	printf("strncmp: %i, ft_strncmp: %i\n",
		strncmp("Abc", "Abcd", 4), ft_strncmp("Abc", "Abcd", 4));
	return (0);
}
