/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:23:09 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/25 23:00:26 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	printf("%i\n", *ft_strupcase("abc"));
	printf("%i\n", *ft_strupcase("Abc"));
	printf("%i\n", *ft_strupcase("1b3d5f"));
	printf("%i\n", *ft_strupcase("erc-20"));
	printf("%i\n", *ft_strupcase("uppercase me baby!"));
	printf("%i\n", *ft_strupcase("wagmi"));
	return (0);
}
