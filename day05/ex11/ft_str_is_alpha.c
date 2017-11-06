/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 20:24:23 by dphay             #+#    #+#             */
/*   Updated: 2017/09/09 21:49:54 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		index;
	char	is_alpha;

	index = 0;
	is_alpha = '1';
	while (str[index] != '\0')
	{
		is_alpha = '0';
		if (str[index] >= 'a' && str[index] <= 'z')
			is_alpha = '1';
		else if (str[index] >= 'A' && str[index] <= 'Z')
			is_alpha = '1';
		if (is_alpha == '0')
			return (0);
		index++;
	}
	if (is_alpha == '1')
		return (1);
	else
		return (0);
}
