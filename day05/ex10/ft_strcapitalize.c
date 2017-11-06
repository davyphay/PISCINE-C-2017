/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 19:35:46 by dphay             #+#    #+#             */
/*   Updated: 2017/09/10 13:51:38 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	cap_next;

	index = 0;
	cap_next = '1';
	str = ft_strlowcase(str);
	while (str[index] != '\0')
	{
		if (cap_next == '1' && str[index] >= 'a' && str[index] <= 'z')
			str[index] -= ' ';
		cap_next = '1';
		if (str[index] >= 'a' && str[index] <= 'z' && str[index])
			cap_next = '0';
		else if (str[index] >= 'A' && str[index] <= 'Z' && str[index])
			cap_next = '0';
		else if (str[index] >= '0' && str[index] <= '9' && str[index])
			cap_next = '0';
		index++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += ' ';
		index++;
	}
	return (str);
}
