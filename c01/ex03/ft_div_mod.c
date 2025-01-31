/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:09:38 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/09 15:12:52 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include<stdio.h>
int main()
 {
int a;
int b;
a = 7;
b = 3;
int o;
int p;
ft_div_mod(a, b, &o, &p);

printf("%i , %i , %i ,%i",a , b, o, p);
return 0;
}*/
