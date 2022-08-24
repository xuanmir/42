/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:40:18 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/24 20:17:56 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*copy;

	copy = ft_strcpy("a", "Coucou");
	printf("%s", copy);
	return (0);
}

// int	main(void)
// {
// 	printf("%s", ft_strcpy("A", "Coucou"));
// 	return (0);
// }
