/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 22:27:42 by dphay             #+#    #+#             */
/*   Updated: 2017/09/09 15:57:42 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	res *= ft_recursive_power(nb, power - 1);
	return (res);
}
