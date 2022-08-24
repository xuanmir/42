/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuanmir <xuanmir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 04:03:53 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/24 05:01:14 by xuanmir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

/*
???
*/
int	main(void)
{
	char	*str;
	char	string;

	str = &string;
	*str = "Hello world!\n";
	ft_putstr(str);
	return (0);

	/*
	<_line[24]_column[10]_selected[18]>
	{
		<2022-08-24@04:57:52>
		∆GCC
		Error: Incompatible pointer to integer conversion assigning to 'char' from 'char [14]'
		[-Werror,-Wint-conversion]

		<2022-08-24@05:00:19>
		@XUANMIR
		Ahhhhh, I hate this!
	}
	*/
}

// int	main(void)
// {
// 	char	str[14] = "Hello world!\n";

// 	ft_putstr(str);
// 	return (0);
// }
