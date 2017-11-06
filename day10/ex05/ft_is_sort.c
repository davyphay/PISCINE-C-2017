/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 09:27:45 by dphay             #+#    #+#             */
/*   Updated: 2017/09/15 12:58:20 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_direction(int *tab, int length, int (*f)(int, int), char direction)
{
	int i;

	i = 0;
	if (direction == 'A')
	{
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	else if (direction == 'D')
	{
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (length < 2)
		return (1);
	while (f(tab[i], tab[i + 1]) == 0)
		i++;
	if (i == length - 1)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (ft_direction(tab, length, f, 'A'));
		else
			return (ft_direction(tab, length, f, 'D'));
		i++;
	}
	return (1);
}
