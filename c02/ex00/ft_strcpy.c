/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:08:15 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/10 12:20:58 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <unistd.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
char	*ft_strcpy(char *dest, char *src);

int main(void) {
    char source_message[] = "Hi There My Name is Tamara";
    char dest[50];

    ft_strcpy(dest, source_message);
    printf("%s\n", dest);

    return 0;
}*/
