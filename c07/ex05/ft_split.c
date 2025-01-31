/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:58:31 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/07/01 13:58:38 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	in_set(char c, char *charset)
{
	int	cur;

	cur = -1;
	while (cur++, charset[cur] != 0)
		if (c == charset[cur])
			return (1);
	return (0);
}

int	numwords(char *str, char *charset)
{
	int	cur;
	int	word_num;

	cur = 0;
	word_num = 0;
	while (str[cur] != 0)
	{
		if (in_set(str[cur], charset) == 0)
			if (in_set(str[cur + 1], charset) == 1 || str[cur + 1] == 0)
				word_num++;
		cur++;
	}
	return (word_num);
}

void	add_result(char *r_str, int s_cur, int e_cur, char *str)
{
	int	cur;

	cur = 0;
	while (s_cur + cur <= e_cur)
	{
		r_str[cur] = str[s_cur + cur];
		cur++;
	}
	r_str[cur] = 0;
}

void	alloc_str(char **result, int w_cur, int cur, int s_cur)
{
	result[w_cur] = (char *)malloc(sizeof(char) * (cur - s_cur + 2));
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		cur;
	int		w_cur;
	int		s_cur;

	result = (char **)malloc(sizeof(char *) * (numwords(str, charset) + 1));
	cur = -1;
	w_cur = 0;
	s_cur = 0;
	while (cur++, str[cur] != 0)
	{
		if (in_set(str[cur], charset) == 1 || str[cur] == 0)
			s_cur = cur + 1;
		if (in_set(str[cur], charset) == 0)
		{
			if (in_set(str[cur + 1], charset) == 1 || str[cur + 1] == 0)
			{
				alloc_str(result, w_cur, cur, s_cur);
				add_result(result[w_cur], s_cur, cur, str);
				w_cur++;
			}
		}
	}
	result[w_cur] = 0;
	return (result);
}
/*int main()
{
    char *str = "Hello, world! This is a test string.";
    char *charset = " ,.!"; 
    char **result;


    result = ft_split(str, charset);

    if (result == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    // Print the splitted words
    printf("Splitted words:\n");
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]); 
    }

  
    free(result);

    return 0;
}*/
