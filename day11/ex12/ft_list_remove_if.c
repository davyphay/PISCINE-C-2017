/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 21:30:31 by dphay             #+#    #+#             */
/*   Updated: 2017/09/20 14:39:48 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *prev;

	tmp = *begin_list;
	while (tmp != NULL && (*cmp)(tmp->data, data_ref) == 0)
	{
		*begin_list = tmp->next;
		free(tmp);
		tmp = *begin_list;
	}
	while (tmp != NULL)
	{
		while (tmp != NULL && (*cmp)(tmp->data, data_ref) != 0)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return ;
		prev->next = tmp->next;
		free(tmp);
		tmp = prev->next;
	}
}
