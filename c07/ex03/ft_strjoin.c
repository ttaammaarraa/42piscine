/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:58:01 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/07/01 13:58:04 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	reslen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i++])
			count++;
		i = 0;
		if (j < size - 1)
			while (sep[i++])
				count++;
		j++;
	}
	return (count + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		n;
	char	*res;

	n = 0;
	j = 0;
	res = (char *) malloc(sizeof(char) * reslen(size, strs, sep));
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			res[n++] = strs[j][i++];
		i = 0;
		if (j < size - 1)
			while (sep[i])
				res[n++] = sep[i++];
		j++;
	}
	res[n] = '\0';
	return (res);
}
/*int main()
{
    char *strs[] = {"Hello", "world", "from", "ChatGPT!"}; 
    char *sep = " "; // Example separator
    int size = 4; // Number of strings in strs array

    // Call ft_strjoin to concatenate strs with sep
    char *result = ft_strjoin(size, strs, sep);

    if (result == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error if memory allocation fails
    }

    // Print the concatenated string
    printf("Concatenated string: %s\n", result);

    // Free the dynamically allocated memory for result
    free(result);

    return 0;
}*/
