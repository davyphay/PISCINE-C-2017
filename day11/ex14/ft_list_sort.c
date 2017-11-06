/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 23:57:09 by dphay             #+#    #+#             */
/*   Updated: 2017/09/20 15:11:40 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*start;
	void	*data_tmp;

	if (*begin_list == NULL)
		return ;
	tmp1 = *begin_list;
	start = tmp1;
	while (tmp1->next != NULL)
	{
		tmp2 = tmp1->next;
		while (tmp2 != NULL)
		{
			if ((*cmp)(tmp2->data, tmp1->data) < 0)
			{
				data_tmp = tmp1->data;
				tmp1->data = tmp2->data;
				tmp2->data = data_tmp;
			}
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	*begin_list = start;
}
