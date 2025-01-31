/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:12:32 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/05 10:27:01 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)
{
	n = 0;
	if (n >= 0)
	{
		write (1, "P", 1);
	}
	else
	{
		write (1, "N", 1);
	}
}
/*
#include<stdio.h>
int main() {
    int number;
    write(1, "Enter a number: ", 16);
    scanf("%d", &number);
    ft_is_negative(number);
    return 0;
}
*/
