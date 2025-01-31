/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:35:03 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/21 17:15:10 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	print_board(int board[6][6], int show_params)
{
	int	i;
	int	j;

	i = 1 - show_params;
	while (i < 5 + show_params)
	{
		j = 1 - show_params;
		while (j < 5 + show_params)
		{
			ft_putchar(board[i][j] + '0');
			if (j != 4 + show_params)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
