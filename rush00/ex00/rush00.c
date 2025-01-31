/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:27:02 by yalrfai           #+#    #+#             */
/*   Updated: 2024/06/08 15:49:35 by almigdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	print00(int x, int y, int w, int h)
{
	if ((x == 1 && y == 1) || (x == 1 && y == w))
		return ('o');
	else if ((x == h && y == 1) || (x == h && y == w))
		return ('o');
	else if (x == 1 || x == h)
		return ('-');
	else if (y == 1 || y == w)
		return ('|');
	else
		return (' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			ft_putchar(print00(i, j, x, y));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
