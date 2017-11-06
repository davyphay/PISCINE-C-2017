/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 23:41:00 by dphay             #+#    #+#             */
/*   Updated: 2017/09/06 20:16:56 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime2(int nb);

int	ft_find_next_prime(int nb)
{
	int next_prime;
	int k;

	k = 0;
	next_prime = nb;
	while (k <= 2147483647)
	{
		if (ft_is_prime2(next_prime) == 1)
			return (next_prime);
		else
		{
			k++;
			next_prime++;
		}
	}
	return (next_prime);
}

int	ft_is_prime2(int nb)
{
	int i;
	int w;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb % 3 == 0)
		return (0);
	i = 5;
	w = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += w;
		w = 6 - w;
	}
	return (1);
}
