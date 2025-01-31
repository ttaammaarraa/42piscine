/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:32:00 by yalrfai           #+#    #+#             */
/*   Updated: 2024/06/07 20:44:56 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	print02(int x, int y, int w, int h)
{
	if ((y == 1 && x == 1) || (x == 1 && y == w))
		return ('A');
	else if ((y == 1 && x == h) || (y == w && x == h))
		return ('C');
	else if (y == 1 || x == 1 || y == w || x == h)
		return ('B');
	else
		return (' ');
}

void	rush(int x, int y)
{
	int	j;
	int	i;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			ft_putchar(print02(i, j, x, y));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
