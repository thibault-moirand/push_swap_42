/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:58:06 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/28 11:14:26 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	i;
	char	*str;

	i = 0;
	if (element_size == 0 || num_elements == 0)
	{
		num_elements = 1;
		element_size = 1;
	}
	str = (char *)malloc(element_size * num_elements);
	if (str == NULL)
		return (NULL);
	while (i < element_size * num_elements)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
