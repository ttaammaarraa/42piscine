/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:56:39 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/07/01 13:56:43 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(src) * i);
	i = 0;
	if (dest == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}
/*int main()
{
    char src[] = "Hello, world!"; // Sample input string

    // Call ft_strdup to duplicate src
    char *dup_str = ft_strdup(src);

    if (dup_str == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error if memory allocation failed
    }

    // Print the original and duplicated strings
    printf("Original string: %s\n", src);
    printf("Duplicated string: %s\n", dup_str);

    // Free the dynamically allocated memory for dup_str
    free(dup_str);

    return 0;*/
