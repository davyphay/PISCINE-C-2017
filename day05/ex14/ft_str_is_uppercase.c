/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 20:55:03 by dphay             #+#    #+#             */
/*   Updated: 2017/09/09 21:52:21 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		index;
	char	is_upc;

	index = 0;
	is_upc = '1';
	while (str[index] != '\0')
	{
		is_upc = '0';
		if (str[index] >= 'A' && str[index] <= 'Z')
			is_upc = '1';
		if (is_upc == '0')
			return (0);
		index++;
	}
	if (is_upc == '1')
		return (1);
	else
		return (0);
}
