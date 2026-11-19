/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:56:26 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/28 17:04:20 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	*malloc_plus(t_stack *stack)
{
	int			j;
	long long	*newstack;

	j = 0;
	if (stack->size == 0)
	{
		stack->size = 1;
		newstack = malloc(sizeof(long long) * (stack->size + 2));
		if (!newstack)
			return (0);
	}
	else
	{
		stack->size += 1;
		newstack = malloc(sizeof(long long) * (stack->size + 2));
		if (!newstack)
			return (0);
		while (j < stack->size)
		{
			newstack[j + 1] = stack->content[j];
			j++;
		}
	}
	free (stack->content);
	return (newstack);
}

long long	*malloc_moins(t_stack *stack)
{
	int			j;
	long long	*newstack;

	j = 0;
	if (stack->size == 1)
	{
		stack->size = 0;
		free (stack->content);
		return (0);
	}
	else
	{
		stack->size -= 1;
		newstack = malloc(sizeof(long long) * (stack->size + 2));
		if (!newstack)
			return (0);
		while (j < stack->size)
		{
			newstack[j] = stack->content[j + 1];
			j++;
		}
	}
	free (stack->content);
	return (newstack);
}

long long	*ft_strdup(t_stack *src)
{
	long long	*copie;
	int			i;

	i = 0;
	copie = malloc(sizeof(long long) * (src->size + 1));
	if (copie == NULL)
		return (NULL);
	i = 0;
	while (i < src->size)
	{
		copie[i] = src->content[i];
		i++;
	}
	return (copie);
}

long long	ft_atoi(const char *str)
{
	int			i;
	long long	retur;
	int			signe;

	i = 0;
	retur = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1 ;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		retur = (retur * 10) + (str[i] - '0');
		i++;
	}
	return (signe * retur);
}

int	frreee(t_stack *stack)
{
	free (stack->content);
	free (stack);
	return (0);
}
