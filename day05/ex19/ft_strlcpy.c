/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:26:41 by dphay             #+#    #+#             */
/*   Updated: 2017/09/11 10:52:07 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen2(char *str);

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int	dest_base_size;
	unsigned	int src_size;
	unsigned	int	len;

	len = 0;
	src_size = ft_strlen2(src);
	dest_base_size = ft_strlen2(dest);
	if (size == 0)
		return (src_size);
	while (src[len] != '\0' && len < size - 1)
	{
		dest[len] = src[len];
		len++;
	}
	if (size > 0)
		dest[len] = '\0';
	return (src_size);
}

int				ft_strlen2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
