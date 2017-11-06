/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 22:05:29 by dphay             #+#    #+#             */
/*   Updated: 2017/09/07 01:34:31 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 0;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb > 0)
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
	else
		return (1);
}
