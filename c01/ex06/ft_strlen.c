/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:54:46 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/10 12:00:10 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include<unistd.h>
int main()
{
    char *str = "Hello, world!";
    int length = ft_strlen(str);

    // Convert the length to string
    char length_str[20];
    int temp = length;
    int digits = 0;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }
    temp = length;
    for (int i = digits - 1; i >= 0; i--)
    {
        length_str[i] = (temp % 10) + '0';
        temp /= 10;
    }
    length_str[digits] = '\0';

    // Print the length of the string
    write(1, "Length of '", 11);
    write(1, str, ft_strlen(str));
    write(1, "' is ", 6);
    write(1, length_str, ft_strlen(length_str));
    write(1, "\n", 1);

    return 0;
}*/
