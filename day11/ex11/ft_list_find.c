/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:45:30 by dphay             #+#    #+#             */
/*   Updated: 2017/09/19 22:47:06 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp != NULL)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
