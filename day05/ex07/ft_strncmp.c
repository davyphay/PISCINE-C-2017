/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 00:59:47 by dphay             #+#    #+#             */
/*   Updated: 2017/09/10 13:26:53 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && (unsigned int)index != n)
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (1);
		index++;
	}
	if ((s1[index] == '\0' && s2[index] == '\0') || (unsigned int)index == n)
		return (0);
	else if (s1[index] == '\0')
		return (1);
	else
		return (-1);
}
