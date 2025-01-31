/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:46:26 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/07/01 09:53:15 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
#include<stdio.h>
int main (void)
{
	int res;
	res = ft_iterative_power(2, 2);
	printf("%d", res);
}*/
