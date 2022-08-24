/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 04:03:53 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/24 10:37:54 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

/*
???
*/
int	main(void)
{
	char	*str = "Hello world!\n";

	ft_putstr(str);
	return (0);
}

// int	main(char *str)
// {
// 	*str = "Hello world!\n";
// 	ft_putstr(str);
// 	return (0);
// }
