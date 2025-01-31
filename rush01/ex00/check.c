/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:36:24 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/21 17:14:56 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_col_up(int board[6][6], int row, int col)
{
	int	col_view;
	int	i;
	int	max_height;
	int	building_count;

	(void)row;
	col_view = board[0][col];
	i = 1;
	max_height = 0;
	building_count = 0;
	while (i < 5 && board[i][col] != 0)
	{
		if (board[i][col] > max_height)
		{
			building_count++;
			max_height = board[i][col];
		}
		i++;
	}
	if (i < 5 && building_count < col_view)
		return (1);
	else if (i == 5 && building_count != col_view)
		return (0);
	return (1);
}

int	check_col_down(int board[6][6], int row, int col)
{
	int	col_view;
	int	i;
	int	max_height;
	int	building_count;

	(void)row;
	col_view = board[5][col];
	i = 4;
	max_height = 0;
	building_count = 0;
	while (i > 0 && board[i][col] != 0)
	{
		if (board[i][col] > max_height)
		{
			building_count++;
			max_height = board[i][col];
		}
		i--;
	}
	if (i > 0 && building_count < col_view)
		return (1);
	else if (i == 0 && building_count != col_view)
		return (0);
	return (1);
}

int	row_left_check(int board[6][6], int row, int col)
{
	int	row_view;
	int	i;
	int	max_height;
	int	building_count;

	(void)col;
	row_view = board[row][0];
	building_count = 0;
	max_height = 0;
	i = 1;
	while (i < 5 && board[row][i] != 0)
	{
		if (board[row][i] > max_height)
		{
			building_count++;
			max_height = board[row][i];
		}
		i++;
	}
	if (i < 5 && building_count < row_view)
		return (1);
	else if (i == 5 && building_count != row_view)
		return (0);
	return (1);
}

int	row_right_check(int board[6][6], int row, int col)
{
	int	row_view;
	int	i;
	int	max_height;
	int	building_count;

	(void)col;
	row_view = board[row][5];
	building_count = 0;
	max_height = 0;
	i = 4;
	while (i > 0 && board[row][i] != 0)
	{
		if (board[row][i] > max_height)
		{
			building_count++;
			max_height = board[row][i];
		}
		i--;
	}
	if (i > 0 && building_count < row_view)
		return (1);
	else if (i == 0 && building_count != row_view)
		return (0);
	return (1);
}

int	check_pos(int board[6][6], int row, int col, int number)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if ((board[row][i] == number && i != col) || (board[i][col] == number
				&& i != row))
			return (0);
		i++;
	}
	if (!check_col_up(board, row, col) || !row_left_check(board, row, col)
		|| !check_col_down(board, row, col) || !row_right_check(board, row,
			col))
		return (0);
	return (1);
}
