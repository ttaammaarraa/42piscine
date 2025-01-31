/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:03:36 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/10 16:07:43 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <unistd.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
char	*ft_strcpy(char *dest, char *src);
int main(void) {
    char source_message[] = "Hi There My Name is Tamara";
    char dest[50];

    ft_stnrcpy(dest, source_message);
    printf("%s\n", dest);

    return 0;
}*/
