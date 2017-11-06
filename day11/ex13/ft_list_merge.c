/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 21:57:43 by dphay             #+#    #+#             */
/*   Updated: 2017/09/20 14:53:43 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *tmp;
	t_list *head;

	tmp = *begin_list1;
	if (tmp == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	else if (begin_list2 == NULL)
		return ;
	head = tmp;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = begin_list2;
	*begin_list1 = head;
}
