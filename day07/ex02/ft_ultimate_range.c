/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 20:01:43 by dphay             #+#    #+#             */
/*   Updated: 2017/09/13 21:18:41 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#ifndef NULL
# define NULL (void*)0
#endif

int	ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;
	int *tab;

	i = 0;
	len = max - min;
	if (len > 0)
	{
		tab = (int*)malloc(sizeof(*range) * (len + 1));
		if (tab == NULL)
			return (0);
		while (i < len)
		{
			tab[i] = min + i;
			i++;
		}
		tab[i] = '\0';
		*range = tab;
		return (len);
	}
	else
	{
		range = NULL;
		return (0);
	}
}
