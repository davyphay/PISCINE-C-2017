/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:36:44 by dphay             #+#    #+#             */
/*   Updated: 2017/09/21 15:45:47 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	if (root == 0)
		return (NULL);
	else
	{
		if ((*cmpf)(root->item, data_ref) < 0)
			return (btree_search_item(root->left, data_ref, cmpf));
		if ((*cmpf)(root->item, data_ref) == 0)
			return (data_ref);
		else
			return (btree_search_item(root->right, data_ref, cmpf));
	}
}
