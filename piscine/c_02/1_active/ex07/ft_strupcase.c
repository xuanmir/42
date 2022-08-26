/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:25:25 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/25 22:58:43 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] -= 32;
		index++;
	}
	return (str);
}

// int	ft_str_is_lowercase(char *str)
// {
// 	int	index;

// 	index = 0;
// 	while (str[index])
// 	{
// 		if (str[index] >= 'a' && str[index] <= 'z')
// 			index++;
// 		else
// 			return (0);
// 	}
// 	return (1);
// }
