/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 22:39:12 by dphay             #+#    #+#             */
/*   Updated: 2017/09/01 22:46:50 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_double(int x);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_double(i);
			ft_putchar(' ');
			ft_print_double(j);
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

void	ft_print_double(int x)
{
	int unite;
	int dizaine;

	unite = x % 10;
	dizaine = x / 10 % 10;
	ft_putchar(dizaine + '0');
	ft_putchar(unite + '0');
}
