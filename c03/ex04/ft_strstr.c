/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:49:00 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/22 14:49:07 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = -1;
	if (to_find[i + 1] == 0)
		return (str);
	while (str[++i])
	{
		j = -1;
		while (str[i + ++j] && str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (&str[i]);
		}
	}
	return (0);
}

// int	ft_strlen(char *dest)
// {
// 	int	i;

// 	i = -1;
// 	while (dest[++i])
// 		i++;
// 	return (i);
// }

// int main () {
//    char source[] = "hidden Point this will be visible";
//    char dest[] = "Point";
//    char *finally;

//    finally = ft_strstr(source, dest);

//    write(1, finally, ft_strlen(finally));

//    return(0);
// }
