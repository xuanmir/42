/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:09:57 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/24 22:59:50 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_alpha("ajkadkjsahlldsllbdasd"));
	printf("%i\n", ft_str_is_alpha("ASHASHODSOHSAOBH"));
	printf("%i\n", ft_str_is_alpha(""));
	printf("%i\n", ft_str_is_alpha("1osn28n9enh89dsads993d"));
	printf("%i\n", ft_str_is_alpha("as as3w dsd. ds, 413"));
	printf("%i\n", ft_str_is_alpha("313205649053150"));
	return (0);
}
