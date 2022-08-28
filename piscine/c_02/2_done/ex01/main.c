/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:07:22 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/28 13:19:57 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			dest[] = "Hello fren, I have something to tell you";
	char			src[] = "Coucou mon vieux";
	unsigned int	n = 17;

	printf("Original: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("Modified: %s\n", dest);
	return (0);
}
