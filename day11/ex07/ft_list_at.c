/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 09:32:00 by dphay             #+#    #+#             */
/*   Updated: 2017/09/18 09:45:08 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	tmp = begin_list;
	i = 0;
	while (i != nbr)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}
	return (tmp);
}
