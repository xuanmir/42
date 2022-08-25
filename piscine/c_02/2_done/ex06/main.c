/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:47:53 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/25 22:19:43 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_printable("ABC"));
	printf("%i\n", ft_str_is_printable("def"));
	printf("%i\n", ft_str_is_printable(",./; !@"));
	printf("%i\n", ft_str_is_printable("\n"));
	printf("%i\n", ft_str_is_printable("\r"));
	printf("%i\n", ft_str_is_printable("\t"));
	return (0);
}
