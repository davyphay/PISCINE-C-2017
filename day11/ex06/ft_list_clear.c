/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 15:01:54 by dphay             #+#    #+#             */
/*   Updated: 2017/09/18 09:29:52 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *current_elem;
	t_list *next_elem;

	current_elem = *begin_list;
	while (current_elem != NULL)
	{
		next_elem = current_elem->next;
		free(current_elem);
		current_elem = next_elem;
	}
	*begin_list = NULL;
}
