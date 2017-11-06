/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 09:42:48 by dphay             #+#    #+#             */
/*   Updated: 2017/09/20 13:24:28 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		push_front(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	if (new_elem)
	{
		new_elem->next = *begin_list;
		*begin_list = new_elem;
	}
}

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*begin_list;
	t_list	*new_elem;
	int		i;

	begin_list = NULL;
	new_elem = NULL;
	if (ac > 0)
	{
		begin_list = ft_create_elem(av[0]);
		i = 1;
		while (i < ac)
		{
			push_front(&begin_list, av[i]);
			i++;
		}
	}
	return (begin_list);
}
