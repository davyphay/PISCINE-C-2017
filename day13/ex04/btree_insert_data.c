/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:14:03 by dphay             #+#    #+#             */
/*   Updated: 2017/09/21 15:30:36 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)())
{
	t_btree *tmp;

	if (tmp == 0)
		return ;
	if (tmp->left == 0 && (*cmpf)(item, tmp->item) < 0)
	{
		tmp->left = btree_create_node(item);
		return ;
	}
	else if (tmp->right == 0 && cmpf(item, tmp->item) >= 0)
	{
		tmp->right = btree_create_node(item);
		return ;
	}
	if ((*cmpf)(item, tmp->item) < 0)
		return (btree_insert_data(&tmp->left, item, cmpf));
	else if ((*cmpf)(item, tmp->item) >= 0)
		return (btree_insert_data(&tmp->right, item, cmpf));
}
