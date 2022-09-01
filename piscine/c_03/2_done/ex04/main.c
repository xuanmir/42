/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:02:38 by xuanmir           #+#    #+#             */
/*   Updated: 2022/09/01 21:02:27 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	haystack[] = "Hello, I'm haystack, can you find the needle?";
	char	needle_empty[] = "";
	char	needle_nowhere[] = "nowhere";
	char	needle_found[] = "the";

	printf("strstr: %s, ft_strstr: %s\n",
		strstr(haystack, needle_empty), ft_strstr(haystack, needle_empty));
	printf("strstr: %s, ft_strstr: %s\n",
		strstr(haystack, needle_nowhere), ft_strstr(haystack, needle_nowhere));
	printf("strstr: %s, ft_strstr: %s\n",
		strstr(haystack, needle_found), ft_strstr(haystack, needle_found));
	return (0);
}
