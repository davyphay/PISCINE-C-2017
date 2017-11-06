/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 09:45:44 by dphay             #+#    #+#             */
/*   Updated: 2017/09/19 22:04:32 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp1;
	t_list *tmp2;
	t_list *tmp3;

	tmp1 = *begin_list;
	if (tmp1 == NULL || tmp1->next == NULL)
		return ;
	tmp2 = tmp1->next;
	tmp1->next = NULL;
	while (tmp2 != NULL)
	{
		tmp3 = tmp2->next;
		tmp2->next = tmp1;
		tmp1 = tmp2;
		tmp2 = tmp3;
	}
	*begin_list = tmp1;
}
