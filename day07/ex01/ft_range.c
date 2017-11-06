/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 20:00:44 by dphay             #+#    #+#             */
/*   Updated: 2017/09/13 12:55:58 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int len;
	int *tab;
	int i;

	len = max - min;
	if (len > 0)
	{
		i = 0;
		tab = (int*)malloc(sizeof(*tab) * (len + 1));
		while (i < len)
		{
			tab[i] = min + i;
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	else
		return (0);
}
