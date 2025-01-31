/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:25:43 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/06/10 16:37:11 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			if (!(str[i] >= 97 && str[i] <= 122))
				return (0);
		}
		i++;
	}
	return (1);
}
// int	main(void)
// {
// 	char *message = "HelloWorld";
// 	printf("%d", ft_str_is_alpha(message));
// 	return (0);
// }
