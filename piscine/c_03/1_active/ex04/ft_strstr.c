/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:56:51 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/31 17:49:01 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	str_index;
	int	find_index;

	str_index = 0;
	if (*to_find == '\0')
		return (str);
	while (str[str_index])
	{
		find_index = 0;
		while (str[find_index])
		{
			/*while (str[find_index])
			{
				return (&str[str_index]);
			}
			find_index++;*/
			if (str[find_index])
			{
				find_index++;
			}
			return (&str[str_index]);
		}
		str_index++;
	}
	return ('\0');
}

/*
<_line[19..20]>
{
	$empty ==>
		{return (str);}
}

<_line[24..31]>
{
	$nowhere ==>
		{return ('\0');}
}

<_line[26..29]>
{
	$found ==>
		{return (&str[index]);}
}
*/
