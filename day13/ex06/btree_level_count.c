/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:43:56 by dphay             #+#    #+#             */
/*   Updated: 2017/09/20 11:53:28 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int left_max_depth;
	int right_max_depth;

	if (root == NULL)
		return (0);
	else
	{
		left_max_depth = btree_level_count(root->left);
		right_max_depth = btree_level_count(root->right);
		if (left_max_depth > right_max_depth)
			return (left_max_depth + 1);
		return (right_max_depth + 1);
	}
}
