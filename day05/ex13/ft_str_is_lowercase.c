/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 20:50:46 by dphay             #+#    #+#             */
/*   Updated: 2017/09/09 21:51:45 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		index;
	char	is_lowc;

	index = 0;
	is_lowc = '1';
	while (str[index] != '\0')
	{
		is_lowc = '0';
		if (str[index] >= 'a' && str[index] <= 'z')
			is_lowc = '1';
		if (is_lowc == '0')
			return (0);
		index++;
	}
	if (is_lowc == '1')
		return (1);
	else
		return (0);
}
