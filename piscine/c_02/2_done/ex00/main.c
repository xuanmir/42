/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:40:18 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/26 14:58:41 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[1337];
	char	src[] = "Coucou Pauline, merci pour le bulletproof d'amour <3";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
