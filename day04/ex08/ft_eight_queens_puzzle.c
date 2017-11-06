/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 09:02:10 by dphay             #+#    #+#             */
/*   Updated: 2017/09/05 13:27:35 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_is_safe2(int size, int board[size][size], int row, int column);
char	ft_is_safe(int size, int board[size][size], int row, int column);
int		ft_solve(int size, int board[size][size], int col, int nb_solution);

int		ft_eight_queens_puzzle(void)
{
	int compteur;
	int board[8][8];
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	compteur = ft_solve(8, board, 0, 0);
	return (compteur);
}

int		ft_solve(int size, int board[size][size], int row, int nb_solution)
{
	int j;
	int tmp;

	tmp = nb_solution;
	if (row >= size)
	{
		nb_solution++;
		return (nb_solution);
	}
	j = 0;
	while (j < size)
	{
		if (ft_is_safe(size, board, row, j) == '1')
		{
			board[row][j] = 1;
			tmp = ft_solve(8, board, row + 1, nb_solution);
			if (nb_solution < tmp)
				nb_solution = tmp;
			board[row][j] = 0;
		}
		j++;
	}
	return (nb_solution);
}

char	ft_is_safe(int size, int board[size][size], int row, int column)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < row)
	{
		if (board[i][column] == 1)
			return ('0');
		i++;
	}
	if (ft_is_safe2(size, board, row, column) == '0')
		return ('0');
	return ('1');
}

char	ft_is_safe2(int size, int board[size][size], int row, int column)
{
	int i;
	int j;

	i = row;
	j = column;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j] == 1)
			return ('0');
		i--;
		j--;
	}
	i = row;
	j = column;
	while (i >= 0 && j < size)
	{
		if (board[i][j] == 1)
			return ('0');
		i--;
		j++;
	}
	return ('1');
}
