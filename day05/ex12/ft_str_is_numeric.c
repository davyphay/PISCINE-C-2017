/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 20:45:41 by dphay             #+#    #+#             */
/*   Updated: 2017/09/09 21:50:29 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		index;
	char	is_num;

	index = 0;
	is_num = '1';
	while (str[index] != '\0')
	{
		is_num = '0';
		if (str[index] >= '0' && str[index] <= '9')
			is_num = '1';
		if (is_num == '0')
			return (0);
		index++;
	}
	if (is_num == '1')
		return (1);
	else
		return (0);
}
