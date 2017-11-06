/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:41:44 by dphay             #+#    #+#             */
/*   Updated: 2017/09/12 15:19:42 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strlen(char *base);
char	ft_is_dual(char *base, char z);
char	ft_check_base(char *base, int base_size, int nbr);

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	int				base_size;
	int				tmp[1000];
	unsigned int	nb;

	base_size = ft_strlen(base);
	nb = nbr;
	if (ft_check_base(base, base_size, nbr) == '1')
	{
		i = 0;
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = -nbr;
		}
		while (nb > 0)
		{
			tmp[i] = nb % base_size;
			nb = nb / base_size;
			i++;
		}
		i++;
		while (--i > 0)
			ft_putchar(base[tmp[i - 1]]);
	}
}

char	ft_check_base(char *base, int base_size, int nbr)
{
	int		i;
	char	tmp_dual[base_size];

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return ('0');
	while (base[i] != '\0')
	{
		tmp_dual[i] = base[i];
		if (base[i] == '+' || base[i] == '-')
			return ('0');
		if (ft_is_dual(tmp_dual, base[i]) == '1')
			return ('0');
		i++;
	}
	if (nbr == 0)
		ft_putchar(base[0]);
	return ('1');
}

char	ft_is_dual(char *tmp, char z)
{
	int index;
	int compteur;

	compteur = 0;
	index = 0;
	while (tmp[index] != '\0')
	{
		if (tmp[index] == z)
		{
			compteur++;
			if (compteur >= 2)
				return ('1');
		}
		index++;
	}
	return ('0');
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
