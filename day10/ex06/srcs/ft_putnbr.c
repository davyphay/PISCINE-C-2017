/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 17:16:47 by dphay             #+#    #+#             */
/*   Updated: 2017/09/18 00:10:02 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_op.h"

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

void	ft_putnbr(int number)
{
	if (number == -2147483648)
		ft_max_neg_putchar();
	else
	{
		if (number < 0)
		{
			ft_putchar('-');
			number = number * -1;
		}
		if (number >= 10)
			ft_putnbr(number / 10);
		ft_putchar((number % 10) + '0');
	}
}
