/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 20:03:52 by dphay             #+#    #+#             */
/*   Updated: 2017/09/14 11:29:17 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_whitespace_detect(char z)
{
	if (z == ' ' || z == '\t' || z == '\n')
		return (1);
	return (0);
}

int		ft_get_len_col(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_whitespace_detect(str[i]) == 0)
		{
			while (ft_whitespace_detect(str[i]) == 0 && str[i] != '\0')
				i++;
			count++;
			i--;
		}
		i++;
	}
	return (count);
}

int		ft_strlen_row(char *str)
{
	int i;

	i = 0;
	while (ft_whitespace_detect(str[i]) == 0 && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_process(char **tab, char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		k = 0;
		tab[j] = malloc(sizeof(**tab) * (ft_strlen_row(str + i) + 1));
		if (ft_whitespace_detect(str[i]) == 0)
		{
			while (ft_whitespace_detect(str[i]) == 0 && str[i] != '\0')
			{
				tab[j][k] = str[i];
				k++;
				i++;
			}
			tab[j][k] = '\0';
			j++;
		}
		if (str[i] != '\0')
			i++;
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		len_col;

	len_col = ft_get_len_col(str);
	tab = malloc(sizeof(*tab) * (len_col + 1));
	tab = ft_process(tab, str);
	tab[len_col] = 0;
	return (tab);
}
