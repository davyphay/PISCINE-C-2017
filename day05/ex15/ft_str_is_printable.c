/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 21:02:35 by dphay             #+#    #+#             */
/*   Updated: 2017/09/10 14:06:59 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] > 126)
			return (0);
		index++;
	}
	return (1);
}
