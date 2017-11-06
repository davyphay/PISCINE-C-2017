/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 20:02:46 by dphay             #+#    #+#             */
/*   Updated: 2017/09/17 15:38:47 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_get_len(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			k++;
			j++;
		}
		i++;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = malloc(sizeof(*str) * (ft_get_len(argc, argv) + argc - 1));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		i++;
		if (i < argc)
			str[k] = '\n';
		else
			str[k] = '\0';
		k++;
	}
	return (str);
}
