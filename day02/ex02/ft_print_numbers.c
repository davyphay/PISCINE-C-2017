/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 22:35:41 by dphay             #+#    #+#             */
/*   Updated: 2017/09/01 22:35:44 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	chiffre;

	chiffre = '0';
	while (chiffre <= '9')
	{
		ft_putchar(chiffre);
		chiffre++;
	}
}
