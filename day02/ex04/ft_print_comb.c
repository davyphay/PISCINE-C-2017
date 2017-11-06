/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 22:38:32 by dphay             #+#    #+#             */
/*   Updated: 2017/09/04 21:01:29 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_multi_putchar(char a, char b, char c, char d);

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				if (i != '7' || j != '8' || k != '9')
				{
					ft_multi_putchar(i, j, k, '1');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	ft_multi_putchar('7', '8', '9', '0');
}

void	ft_multi_putchar(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (d == '1')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
