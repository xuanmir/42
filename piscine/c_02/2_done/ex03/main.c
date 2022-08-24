/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:43:08 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/24 22:52:49 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_numeric("21081403187128893123603"));
	printf("%i\n", ft_str_is_numeric("000222444888"));
	printf("%i\n", ft_str_is_numeric(""));
	printf("%i\n", ft_str_is_numeric("23-4091234-2308-1234"));
	printf("%i\n", ft_str_is_numeric("230eijn320dhdf83lKKKFFI9d,,3sd.2hs9dsk"));
	printf("%i\n", ft_str_is_numeric("ajkadkjsahlldsllbdasd"));
	printf("%i\n", ft_str_is_numeric("ASHASHODSOHSAOBH"));
	printf("%i\n", ft_str_is_numeric("1osn28n9enh89dsads993d"));
	printf("%i\n", ft_str_is_numeric("as as3w dsd. ds, 413"));
	return (0);
}
