/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 16:08:35 by dphay             #+#    #+#             */
/*   Updated: 2017/09/04 17:57:23 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_search_min_position(int *tab, int size, int start_position);
void	ft_tab_value_swap(int *tab, int position1, int position2);

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int min_position;

	i = 0;
	while (i < size - 1)
	{
		min_position = ft_search_min_position(tab, size, i);
		if (min_position > i)
			ft_tab_value_swap(tab, min_position, i);
		i++;
	}
}

int		ft_search_min_position(int *tab, int size, int start_position)
{
	int min;
	int i;
	int min_position;

	i = start_position;
	min_position = i;
	min = tab[start_position];
	while (i < size)
	{
		if (tab[i] < min)
		{
			min = tab[i];
			min_position = i;
		}
		i++;
	}
	return (min_position);
}

void	ft_tab_value_swap(int *tab, int position1, int position2)
{
	int	tmp;

	tmp = tab[position1];
	tab[position1] = tab[position2];
	tab[position2] = tmp;
}
