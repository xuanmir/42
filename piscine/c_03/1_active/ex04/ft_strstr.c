/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:56:51 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/30 18:22:41 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	str_index;
	int	find_index;

	str_index = 0;
	if (*to_find == '\0')      // empty
		return (str);
	while (str[str_index])
	{
		find_index = 0;
		while (str[find_index])			// nowhere
		{
			while (str[index])		// found
			{
				index++;
			}
			find_index++;
		}
		str_index++;
	}
	return (str);
}
