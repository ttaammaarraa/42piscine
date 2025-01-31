/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalrfai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:56:35 by yalrfai           #+#    #+#             */
/*   Updated: 2024/06/08 18:11:36 by yalrfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	if (argc != 3)
		write(1, "ENTER TWO NUM", 13);
	else
	{
		if (atoi(argv[1]) <= 0 || atoi(argv[2]) <= 0)
			write(1, "ENTER NUMBRES", 14);
		else
			rush(atoi(argv[1]), atoi(argv[2]));
	}
	return (0);
}
