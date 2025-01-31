/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:58:39 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/30 13:38:53 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*#include<stdio.h>
int main() {
    int number;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    int factorial = ft_recursive_factorial(number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %d\n", number, factorial);
    }

    return 0;
}*/
/*#include<stdio.h>
int main (void)
{
	int res;
	res = ft_recursive_factorial(10);
	printf("%d", res);
}*/
