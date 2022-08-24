/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 04:31:46 by xuanmir           #+#    #+#             */
/*   Updated: 2022/08/24 15:41:46 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator])
	{
		iterator++;
	}
	return (iterator);
}
