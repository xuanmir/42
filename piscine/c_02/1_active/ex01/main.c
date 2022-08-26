/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:07:22 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/26 22:59:16 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			dest[1337];
	char			src[] = "Coucou Pauline, merci pour le bulletproof d'amour <3";
	unsigned int	n;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
