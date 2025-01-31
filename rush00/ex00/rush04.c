/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:47:01 by yalrfai           #+#    #+#             */
/*   Updated: 2024/06/08 14:53:53 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	print04(int x, int y, int w, int h)
{
	if (y == 1 && x == 1)
		return ('A');
	else if ((y == 1 && x == h) || (y == w && x == 1))
		return ('C');
	else if (x == w && x == h)
		return ('A');
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
			ft_putchar(print04(i, j, x, y));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
