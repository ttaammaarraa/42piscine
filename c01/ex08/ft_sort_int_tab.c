/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:50:55 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/10 18:53:13 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] <= tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include<stdio.h>
int main()
{
 int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
 ft_sort_int_tab(tab, 10);
 printf("the first is %d\n the last is %d", tab[0], tab[9]);
}
*/
