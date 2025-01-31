/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:05:41 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/22 17:17:35 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *dest)
{
	int	i;

	i = -1;
	while (dest[++i])
		;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = -1;
	while (src[++i])
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

// int main() {
//    char str1[100] = "This is ", str2[] = "programiz.com";

//    char *dest = ft_strcat(str1, str2);
//    int x = ft_strlen(dest);

//    printf("%s\b%d", dest, x);

//    return (0);
// }
