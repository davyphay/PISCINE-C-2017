/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 22:39:55 by dphay             #+#    #+#             */
/*   Updated: 2017/09/04 14:24:45 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_max_neg_putchar(void);
int		ft_get_int_len(int x);
void	ft_process(int n);

void	ft_putnbr(int number)
{
	if (number == -2147483648)
	{
		ft_max_neg_putchar();
	}
	else
	{
		if (number < 0)
		{
			ft_putchar('-');
			ft_process(-number);
		}
		else
		{
			ft_process(number);
		}
	}
}

void	ft_max_neg_putchar(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_process(int n)
{
	int	length;
	int extract;
	int power;

	length = ft_get_int_len(n);
	while (length > 0)
	{
		extract = n;
		power = length - 1;
		while (power > 0)
		{
			extract = extract / 10;
			power--;
		}
		extract = extract % 10;
		ft_putchar(extract + '0');
		length--;
	}
}

int		ft_get_int_len(int x)
{
	int	l;

	l = 1;
	while (x > 9)
	{
		l++;
		x /= 10;
	}
	return (l);
}
