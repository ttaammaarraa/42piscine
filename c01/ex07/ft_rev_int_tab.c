/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:47:08 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/10 15:49:55 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = -1;
	temp = 0;
	while (++index < --size)
	{
		temp = tab[index];
		tab[index] = tab[size];
		tab[size] = temp;
	}
}
/*
#include <stdio.h>
int main(void)
{
 int c[] = {1, 2, 3, 4};
 ft_rev_int_tab(c, 4);
 printf("c0 is %d\nc1 is %d", c[0], c[1]);
 return (0);
}
*/
