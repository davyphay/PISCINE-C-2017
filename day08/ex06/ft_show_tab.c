/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 15:28:55 by dphay             #+#    #+#             */
/*   Updated: 2017/09/18 17:18:34 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j] != '\0')
		{
			ft_putstr(par[i].tab[j]);
			j++;
			if (par[i].tab[j] != '\0')
				ft_putchar('\n');
		}
		i++;
		ft_putchar('\n');
	}
}
