/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 13:03:31 by dphay             #+#    #+#             */
/*   Updated: 2017/09/18 17:54:59 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int						i;
	int						j;
	struct s_stock_par		*tab;

	i = 0;
	tab = malloc(sizeof(*tab) * (ac + 1));
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = (char*)malloc(sizeof(char) * (tab[i].size_param + 1));
		j = 0;
		while (j < tab[i].size_param)
		{
			tab[i].copy[j] = av[i][j];
			j++;
		}
		tab[i].copy[j] = '\0';
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
