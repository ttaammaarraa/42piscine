/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:30:18 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/11 13:46:04 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*nclude<stdio.h>
int main() {
char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
int result;

result = ft_strcmp(str1, str2);
printf("ft_strcmp(str1, str2) = %d\n", result);
result = ft_strcmp(str1, str3);
printf("ft_strcmp(str1, str3) = %d\n", result);

return (0);
}*/
