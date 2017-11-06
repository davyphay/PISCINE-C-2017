/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 23:54:12 by dphay             #+#    #+#             */
/*   Updated: 2017/09/11 07:57:16 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr_base3(int nbr, char *base);
void	ft_to_hex(char z);

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 || str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_to_hex(str[i]);
		}
		i++;
	}
}

void	ft_to_hex(char z)
{
	int		dec;
	char	base[16];
	int		index;

	index = 0;
	while (index < 16)
	{
		if (index < 10)
			base[index] = index + '0';
		else
			base[index] = index + 'W';
		index++;
	}
	dec = 0;
	while (z != ' ')
	{
		dec++;
		z++;
	}
	ft_putnbr_base3(32 - dec, base);
}

void	ft_putnbr_base3(int nbr, char *base)
{
	int i;
	int base_size;
	int tmp[1000];

	base_size = 0;
	while (base[base_size])
		base_size++;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	i = 0;
	while (nbr > 0)
	{
		tmp[i] = nbr % base_size;
		nbr = nbr / base_size;
		i++;
	}
	i++;
	while (--i > 0)
		ft_putchar(base[tmp[i - 1]]);
}
