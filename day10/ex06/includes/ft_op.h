/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 16:51:19 by dphay             #+#    #+#             */
/*   Updated: 2017/09/14 13:57:54 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_H
# define FT_OP_H

typedef	struct	s_op
{
	char	op;
	int		(*f_op)(int, int);
}				t_op;
void			ft_putchar(char c);
int				ft_atoi(char *str);
void			ft_putnbr(int nbr);
void			ft_putstr(char *str);
int				add(int a, int b);
int				sub(int a, int b);
int				mul(int a, int b);
int				div(int a, int b);
int				mod(int a, int b);
#endif
