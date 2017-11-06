/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 10:48:48 by dphay             #+#    #+#             */
/*   Updated: 2017/09/20 21:19:01 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_node;

	new_node = malloc(sizeof(t_btree));
	if (new_node)
	{
		new_node->left = 0;
		new_node->right = 0;
		new_node->item = item;
		return (new_node);
	}
	return (NULL);
}
