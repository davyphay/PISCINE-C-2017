/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 10:59:21 by dphay             #+#    #+#             */
/*   Updated: 2017/09/19 19:39:25 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*tmp;
	t_list	*new;

	new = ft_create_elem(data);
	tmp = *begin_list;
	if (tmp == NULL || (*cmp)(tmp->data, new->data) >= 0)
	{
		new->next = tmp;
		*begin_list = new;
	}
	else
	{
		while (tmp->next != NULL && (*cmp)(tmp->next->data, new->data) < 0)
			tmp = tmp->next;
		new->next = tmp->next;
		tmp->next = new;
	}
}
