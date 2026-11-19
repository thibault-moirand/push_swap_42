/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:46:56 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/28 11:14:24 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	cworld(char const *s, char c)
{
	int		i;
	size_t	nbm;

	i = 0;
	nbm = 0;
	if (s[0] == '\0' || s == NULL || !s || *s == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			nbm++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nbm);
}

size_t	countsize(char const *s, char c, int i)
{
	size_t	j;

	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**splite;
	int		k;
	int		i;
	int		j;

	k = 0;
	i = 0;
	splite = (char **)ft_calloc(cworld(s, c) + 1, sizeof(char *));
	if (splite == NULL)
		return (NULL);
	while ((cworld(s, c) - k) > 0)
	{
		while (s[i] == c)
			i++;
		j = 0;
		splite[k] = (char *)ft_calloc(countsize(s, c, i) + 1, sizeof(char));
		if (splite[k] == NULL)
			return (NULL);
		while (s[i] != c && s[i])
			splite[k][j++] = s[i++];
		splite[k++][j] = '\0';
	}
	return (splite);
}
/*
#include <stdio.h>
#include <stdlib.h>


int main() {
    const char *input = ",Hello e,World,Split,Example,,";
    char delimiter = ',';

    char **result = ft_split(input, delimiter);

    if (result) {
        int i = 0;
        while (result[i] != NULL) {
            printf("Token %d: %s\n", i, result[i]);
            i++;
        }
        for (int j = 0; result[j] != NULL; j++) {
            free(result[j]);
        }
        free(result);
    } else {
        printf("ft_split returned NULL (allocation failed).\n");
    }

    return 0;
}
*/
