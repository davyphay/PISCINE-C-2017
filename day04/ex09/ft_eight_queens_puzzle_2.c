/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 15:33:54 by dphay             #+#    #+#             */
/*   Updated: 2017/09/07 01:54:31 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_tab_solution(int *tab);
char	ft_is_safe_bis2(int size, int board[size][size], int row, int column);
char	ft_is_safe_bis(int size, int board[size][size], int row, int column);
int		ft_solve2(int board[8][8], int col, int nb_solution, int tab_sol[8]);

int		ft_eight_queens_puzzle_2(void)
{
	int compteur;
	int board[8][8];
	int tab_sol[8];
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
	compteur = ft_solve2(board, 0, 0, tab_sol);
	return (compteur);
}

int		ft_solve2(int board[8][8], int row, int nb_solution, int tab_sol[8])
{
	int j;
	int tmp;

	tmp = nb_solution;
	if (row >= 8)
	{
		nb_solution++;
		ft_print_tab_solution(tab_sol);
		return (nb_solution);
	}
	j = 0;
	while (j < 8)
	{
		if (ft_is_safe_bis(8, board, row, j) == '1')
		{
			board[row][j] = 1;
			tab_sol[row] = j + 1;
			tmp = ft_solve2(board, row + 1, nb_solution, tab_sol);
			if (nb_solution < tmp)
				nb_solution = tmp;
			board[row][j] = 0;
		}
		j++;
	}
	return (nb_solution);
}

void	ft_print_tab_solution(int tab_sol[8])
{
	int k;

	k = 0;
	while (k < 8)
	{
		ft_putchar(tab_sol[k] + '0');
		k++;
	}
	ft_putchar('\n');
}

char	ft_is_safe_bis(int size, int board[size][size], int row, int column)
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
	if (ft_is_safe_bis2(size, board, row, column) == '0')
		return ('0');
	return ('1');
}

char	ft_is_safe_bis2(int size, int board[size][size], int row, int column)
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
