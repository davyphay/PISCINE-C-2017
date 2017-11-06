/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 00:40:26 by dphay             #+#    #+#             */
/*   Updated: 2017/09/12 20:43:04 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int	dest_base_size;
	unsigned	int	src_size;
	unsigned	int	i;

	i = 0;
	dest_base_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	while (src[i] != '\0' && (dest_base_size + i) < (size - 1))
	{
		dest[dest_base_size + i] = src[i];
		i++;
	}
	dest[dest_base_size + i] = '\0';
	if (dest_base_size < size)
		return (src_size + dest_base_size);
	return (src_size + size);
}

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
