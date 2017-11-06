/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 10:19:46 by dphay             #+#    #+#             */
/*   Updated: 2017/09/20 16:49:06 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size2(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

t_list	*ft_get_previous(t_list *to_find, t_list *begin_list)
{
	t_list *tmp;

	tmp = begin_list;
	if (begin_list == NULL)
		return (NULL);
	while (tmp->next != to_find && tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*first;
	t_list	*second;
	t_list	*tail;
	int		nb_swap;
	void	*data_tmp;

	if (begin_list == NULL || begin_list->next == NULL)
		return ;
	tail = begin_list;
	while (tail->next != NULL)
		tail = tail->next;
	first = begin_list;
	second = tail;
	nb_swap = ft_list_size2(begin_list) / 2;
	while (nb_swap > 0)
	{
		data_tmp = first->data;
		first->data = second->data;
		second->data = data_tmp;
		first = first->next;
		second = ft_get_previous(second, begin_list);
		nb_swap--;
	}
}
