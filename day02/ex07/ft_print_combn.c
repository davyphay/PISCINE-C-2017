/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 14:04:35 by dphay             #+#    #+#             */
/*   Updated: 2017/09/02 14:24:53 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_sequence(char *tab, int n);
void	ft_tab_increment(char *tab, int position, int n);

void	ft_print_combn(int n)
{
	char	tab[n];
	int		i;

	i = 0;
	while (i < n)
	{
		tab[i] = i + '0';
		i++;
	}
	while (tab[0] != 11 - n + '0')
	{
		ft_print_sequence(tab, n);
		ft_tab_increment(tab, n - 1, n);
	}
}

void	ft_tab_increment(char *tab, int position, int n)
{
	if (position == n - 1 && tab[position] < '9')
	{
		tab[position]++;
	}
	else if (tab[position] < 10 - n + position + '0')
	{
		tab[position]++;
	}
	else if (position == 0)
	{
		tab[position]++;
	}
	else
	{
		ft_tab_increment(tab, position - 1, n);
		tab[position] = tab[position - 1] + 1;
	}
}

void	ft_print_sequence(char *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i]);
		i++;
	}
	if (tab[0] < 10 - n + '0')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
