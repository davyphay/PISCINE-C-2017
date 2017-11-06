/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 13:28:04 by dphay             #+#    #+#             */
/*   Updated: 2017/09/12 16:48:02 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	ft_is_dual2(char *tmp, char z);
char	ft_check_base2(char *base, int base_size, char *str, int i);
int		ft_p_base(char *base, char z, char option);
long	ft_pow(int nb, char *str, int i);

int		ft_atoi_base(char *str, char *base)
{
	long			nb;
	int				base_size;
	int				i;
	int				sign;

	nb = 0;
	base_size = ft_p_base(base, '0', '0');
	i = 0;
	sign = 1;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign = -1;
		i++;
	}
	if (ft_check_base2(base, base_size, str, i) == '0')
		return (0);
	while (str[i] != '\0' && str[i] != '+' && str[i] != '-')
	{
		nb += ft_pow(base_size, str, i) * ft_p_base(base, str[i], '1');
		if ((nb > 2147483647 && sign == 1) || (nb > 2147483648 && sign == -1))
			return (0);
		i++;
	}
	return (nb * sign);
}

long	ft_pow(int nb, char *str, int i)
{
	long	res;
	int		power;

	power = i;
	while (str[power] != '\0' && str[power] != '+' && str[power] != '-')
		power++;
	power = power - i - 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

int		ft_p_base(char *base, char z, char option)
{
	int index;

	index = 0;
	while (base[index] != '\0')
	{
		if (option == '1')
		{
			if (base[index] == z)
				return (index);
		}
		index++;
	}
	if (option == '0')
		return (index);
	return (-1);
}

char	ft_check_base2(char *base, int base_size, char *str, int i)
{
	int		index;
	char	tmp_dual[base_size];

	index = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return ('0');
	while (base[index] != '\0')
	{
		tmp_dual[index] = base[index];
		if (base[index] == '+' || base[index] == '-')
			return ('0');
		if (ft_is_dual2(tmp_dual, base[index]) == '1')
			return ('0');
		index++;
	}
	while (str[i] != '\0' && str[i] != '+' && str[i] != '-')
	{
		if (ft_p_base(base, str[i], '1') == -1)
			return ('0');
		i++;
	}
	return ('1');
}

char	ft_is_dual2(char *tmp, char z)
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
