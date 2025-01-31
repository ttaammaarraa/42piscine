/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:35:50 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/07/01 10:39:12 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (res <= nb)
	{
		i++;
		res = i * i;
	}
	if ((i - 1) * (i - 1) != nb)
	{
		return (0);
	}
	return (i - 1);
}
/*
#include<stdio.h>
int main(void)
{
	int i;
	i = ft_sqrt(4);
	printf("%d", i);
}*/
