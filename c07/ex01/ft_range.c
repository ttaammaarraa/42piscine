/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:57:02 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/07/01 13:57:04 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		return (tab);
	}
}
/*int main()
{
    int min = 5; // Example minimum value
    int max = 12; // Example maximum value

    // Call ft_range to create an array of integers within the range [min, max)
    int *result = ft_range(min, max);

    if (result == NULL)
    {
        printf("Memory allocation failed or invalid range!\n");
        return 1; // Exit with error if memory allocation fails or invalid range
    }

    // Print the elements of the array
    printf("Generated array:\n");
    for (int i = 0; i < max - min; ++i)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory for result
    free(result);

    return 0;
}*/
