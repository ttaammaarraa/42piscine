/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 12:53:54 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/09 15:08:58 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*int main()
{
    int x = 42;
    int y = 99;
    write(1, "Before swap: x = ", 17);
    char x_char = x + '0';
    write(1, &x_char, 1);
    write(1, ", y = ", 6);
    char y_char = y + '0';
    write(1, &y_char, 1);
    write(1, "\n", 1);
    ft_swap(&x, &y);

    //x and y after swapping
    write(1, "After swap: x = ", 16);
    x_char = x + '0';
    write(1, &x_char, 1);
    write(1, ", y = ", 6);
    y_char = y + '0';
    write(1, &y_char, 1);
    write(1, "\n", 1);

    return 0;
}*/
