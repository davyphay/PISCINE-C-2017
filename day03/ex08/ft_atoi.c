/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:04:06 by dphay             #+#    #+#             */
/*   Updated: 2017/09/05 23:52:35 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_is_numeric(char x)
{
	if (x >= '0' && x <= '9')
		return ('1');
	else
		return ('0');
}

int		ft_begin_spec_char(char *str)
{
	int compteur;

	compteur = 0;
	while (str[compteur] <= ' ')
		compteur++;
	return (compteur);
}

int		ft_atoi(char *str)
{
	int ret;
	int i;
	int sign;

	if (str[0] == '\0')
		return (0);
	i = ft_begin_spec_char(str);
	sign = 1;
	ret = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[0] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (ft_is_numeric(str[i]) == '0')
			break ;
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (ret * sign);
}
