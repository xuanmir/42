/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:02:38 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/30 11:15:46 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	haystack[] = "Hello, I'm haystack, can you find the needle?";
	char	needle_empty[] = "";					// return (str);
	char	needle_nowhere[] = "nowhere";			// return ('\0');
	char	needle_found[] = "needle";				// return (str[index]);

	printf("strstr: %s, ft_strstr: %s",
		strstr(haystack, needle_empty), ft_strstr(haystack, needle_empty));
	printf("strstr: %s, ft_strstr: %s",
		strstr(haystack, needle_nowhere), ft_strstr(haystack, needle_nowhere));
	printf("strstr: %s, ft_strstr: %s",
		strstr(haystack, needle_found), ft_strstr(haystack, needle_found));
	return (0);
}
