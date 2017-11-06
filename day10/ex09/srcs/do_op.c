/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 14:26:52 by dphay             #+#    #+#             */
/*   Updated: 2017/09/18 18:21:16 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_op.h"
#include "../includes/ft_opp.h"

int		ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	ft_putstr("error : only [ + - * / % ] are accepted.");
	ft_putchar('\n');
	return (0);
}

int		ft_op(int a, int b, int (*f)(int, int))
{
	return (f(a, b));
}

void	ft_do_op(int a, char *oper, int b)
{
	int		i;

	i = 0;
	while (i < 5)
	{
		if (ft_strcmp(oper, g_opptab[i].opp) == 0)
		{
			ft_putnbr(ft_op(a, b, g_opptab[i].f_opp));
			ft_putchar('\n');
			return ;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		if (ft_strcmp(argv[2], "+") == 0 || ft_strcmp(argv[2], "-") == 0
			|| ft_strcmp(argv[2], "*") == 0 || ft_strcmp(argv[2], "/") == 0
			|| ft_strcmp(argv[2], "%") == 0)
		{
			if (ft_strcmp(argv[2], "/") == 0 && b == 0)
				ft_putstr("Stop : division by zero\n");
			else if (ft_strcmp(argv[2], "%") == 0 && b == 0)
				ft_putstr("Stop : modulo by zero\n");
			else
				ft_do_op(a, argv[2], b);
			return (0);
		}
		else
			ft_op(a, b, g_opptab[5].f_opp);
	}
	return (0);
}
