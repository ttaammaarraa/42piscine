/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:31:31 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/07/01 10:32:37 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	if (nb < 2)
		return (nb);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}
/*
#include<stdio.h>
int main(void)
{
	int i;
	i = ft_fibonacci(4);
	printf("%d", i);
}*/
