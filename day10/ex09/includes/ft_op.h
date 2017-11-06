/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 16:51:19 by dphay             #+#    #+#             */
/*   Updated: 2017/09/18 18:20:43 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_H
# define FT_OP_H

typedef	struct	s_opp
{
	char	*opp;
	int		(*f_opp)(int, int);
}				t_opp;

void			ft_putchar(char c);
int				ft_atoi(char *str);
void			ft_putnbr(int nbr);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);
#endif
