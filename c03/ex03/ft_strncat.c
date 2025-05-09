/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:08:01 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/21 18:08:06 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_strlen(char *dest)
{
	int	i;

	i = -1;
	while (dest[++i])
		;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	dest_len;

	if (nb < 1)
		return (dest);
	index = 0;
	dest_len = ft_strlen(dest);
	while (src[index] && index < nb)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = 0;
	return (dest);
}

// int main ()
// {
//   char str1[] = "To Be ";
//   char str2[] = "or not this will be hidden";
//   ft_strncat (str1, str2, 6);
//   write(1, str1, ft_strlen(str1));
//   return (0);
// }
