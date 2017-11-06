/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 09:35:46 by dphay             #+#    #+#             */
/*   Updated: 2017/09/19 13:27:34 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp;
	t_list *tmp2;

	tmp = begin_list;
	while (tmp != NULL)
	{
		tmp2 = tmp;
		tmp = tmp->next;
	}
	return (tmp2);
}
