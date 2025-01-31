/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:31:20 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/09 17:37:12 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a / *b;
	*b = *a % *b;
	*a = i;
}
/*#include<unistd.h>
int main()
{
 int a;
 int b;

 a = 68;
 b = 10;
 ft_ultimate_div_mod(&a, &b);
 printf("Value of a is %d\nValue of b is %d", a, b);
 return (0);
}*/
