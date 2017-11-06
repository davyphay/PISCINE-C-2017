/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 19:58:43 by dphay             #+#    #+#             */
/*   Updated: 2017/09/13 21:15:53 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#ifndef NULL
# define NULL (void*)0
#endif

char	*ft_strdup(char *src)
{
	char	*str;
	int		src_size;
	int		i;

	i = 0;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	str = (char*)malloc(sizeof(*src) * (src_size + 1));
	if (str != NULL)
	{
		while (src[i] != '\0')
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}
	else
		return (NULL);
	return (str);
}
