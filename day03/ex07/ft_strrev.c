/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 11:43:55 by dphay             #+#    #+#             */
/*   Updated: 2017/09/05 15:58:33 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap2(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*tmp;

	tmp = str;
	i = 0;
	j = 0;
	while (*tmp)
	{
		j++;
		tmp++;
	}
	j = j - 1;
	while (i < j)
	{
		ft_swap2(&str[i], &str[j]);
		i++;
		j--;
	}
	return (str);
}
