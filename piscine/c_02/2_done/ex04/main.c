/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:16:01 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/25 20:20:42 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_lowercase("lkjdfbglkjbdlks"));
	printf("%i\n", ft_str_is_lowercase("abc"));
	printf("%i\n", ft_str_is_lowercase(""));
	printf("%i\n", ft_str_is_lowercase("KASLBASBKLlkbdb"));
	printf("%i\n", ft_str_is_lowercase("adjkhfal123"));
	printf("%i\n", ft_str_is_lowercase("sljas asdas dsee"));
	return (0);
}
