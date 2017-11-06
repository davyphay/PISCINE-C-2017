/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 14:26:52 by dphay             #+#    #+#             */
/*   Updated: 2017/09/19 14:44:45 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_op.h"

int		ft_op(int a, int b, int (*f)(int, int))
{
	return (f(a, b));
}

void	ft_do_op(int a, char oper, int b)
{
	int		i;
	t_op	tab[5];

	i = 0;
	tab[0].op = '+';
	tab[0].f_op = &add;
	tab[1].op = '-';
	tab[1].f_op = &sub;
	tab[2].op = '*';
	tab[2].f_op = &mul;
	tab[3].op = '/';
	tab[3].f_op = &div;
	tab[4].op = '%';
	tab[4].f_op = &mod;
	while (i < 5)
	{
		if (tab[i].op == oper)
			ft_putnbr(ft_op(a, b, tab[i].f_op));
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		a;
	char	op;
	int		b;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		op = argv[2][0];
		b = ft_atoi(argv[3]);
		if (argv[2][1] != '\0')
			ft_putnbr(0);
		else if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
		{
			if (op == '/' && b == 0)
				ft_putstr("Stop : division by zero");
			else if (op == '%' && b == 0)
				ft_putstr("Stop : modulo by zero");
			else
				ft_do_op(a, op, b);
		}
		else
			ft_putnbr(0);
		ft_putchar('\n');
	}
	return (0);
}
