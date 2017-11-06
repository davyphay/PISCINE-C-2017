/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 17:29:31 by dphay             #+#    #+#             */
/*   Updated: 2017/09/11 11:11:32 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen2(char *str);
int		ft_strncmp2(char *s1, char *s2, int n);

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int str_size;

	i = 0;
	if (!to_find)
		return (str);
	str_size = ft_strlen2(to_find);
	while (str[i] != '\0')
	{
		if (ft_strncmp2(&str[i], to_find, str_size) == 0)
			return ((char*)&str[i]);
		i++;
	}
	return (0);
}

int		ft_strncmp2(char *s1, char *s2, int n)
{
	int index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && index != n)
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (1);
		index++;
	}
	if ((s1[index] == '\0' && s2[index] == '\0') || index == n)
		return (0);
	else if (s1[index] == '\0')
		return (1);
	else
		return (-1);
}

int		ft_strlen2(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
