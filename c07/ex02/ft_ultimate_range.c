/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:57:18 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/07/01 13:57:24 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		*range = tab;
		return (i);
	}
}
/*int main()
{
    int *range = NULL; // Pointer to the allocated array
    int min = 5; // Example minimum value
    int max = 12; // Example maximum value


    int count = ft_ultimate_range(&range, min, max);

    if (count == -1)
    {
        printf("Memory allocation failed or invalid range!\n");
        return 1; 
    }
    else if (range == NULL)
    {
        printf("Range pointer is NULL (invalid range)!\n");
        return 1; // Exit with error if range pointer is NULL
    }

    // Print the elements of the allocated array
    printf("Generated array:\n");
    for (int i = 0; i < count; ++i)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory for range
    free(range);

    return 0;
}*/
