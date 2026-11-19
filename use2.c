/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:13:00 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/23 09:04:03 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strcmp(char *a, char *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (b[j] == a[i + j] && b[j] != '\0')
		j++;
	if (b[j] == '\0')
		return (1);
	return (0);
}
