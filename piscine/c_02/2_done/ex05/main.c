/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:22:44 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/25 21:25:58 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_uppercase("HAHAHA"));
	printf("%i\n", ft_str_is_uppercase("ABC"));
	printf("%i\n", ft_str_is_uppercase(""));
	printf("%i\n", ft_str_is_uppercase("Hahaha"));
	printf("%i\n", ft_str_is_uppercase("HA HA HA"));
	printf("%i\n", ft_str_is_uppercase("12jkds8dh34lw"));
	return (0);
}
