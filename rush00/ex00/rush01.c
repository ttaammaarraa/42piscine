/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:34:24 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/08 15:02:38 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

char	print01(int x, int y, int w, int h)
{
	if (y == 1 && x == 1)
		return ('/');
	else if ((y == w && x == 1) || (y == 1 && x == h))
		return ('\\');
	else if (y == w && x == h)
		return ('/');
	else if (y == 1 || x == 1 || y == w || x == h)
		return ('*');
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
			ft_putchar(print01(i, j, x, y));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
