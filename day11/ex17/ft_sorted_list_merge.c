/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 12:58:34 by dphay             #+#    #+#             */
/*   Updated: 2017/09/19 20:26:06 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_recursive_sort(t_list *tmp1, t_list *tmp2, int (*cmp)())
{
	t_list *result;

	if (tmp1 == NULL)
		return (tmp2);
	else if (tmp2 == NULL)
		return (tmp1);
	if ((*cmp)(tmp1->data, tmp2->data) <= 0)
	{
		result = tmp1;
		result->next = ft_recursive_sort(tmp1->next, tmp2, cmp);
	}
	else
	{
		result = tmp2;
		result->next = ft_recursive_sort(tmp1, tmp2->next, cmp);
	}
	return (result);
}

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	t_list *tmp;

	tmp = *begin_list1;
	tmp = ft_recursive_sort(tmp, begin_list2, cmp);
	*begin_list1 = tmp;
}
