/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:57:34 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/28 17:07:25 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(long long *a, long long *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

long long	*indexa(t_stack *stack)
{
	int			i;
	int			j;
	int			n;
	long long	*stack2;

	i = 0;
	j = 0;
	stack2 = ft_strdup(stack);
	n = stack->size;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (stack2[j] > stack2[j + 1])
				swap(&stack2[j], &stack2[j + 1]);
			j++;
		}
		i++;
	}
	return (stack2);
}

void	replace(t_stack *stack, long long *stack2)
{
	int	i;
	int	j;

	i = 0;
	while (i <= stack->size - 1)
	{
		j = 0;
		while (j <= stack->size - 1)
		{
			if (stack->content[i] == stack2[j])
			{
				stack->content[i] = (j);
				break ;
			}
			j++;
		}
		i++;
	}
}
/*
void	rreplace(t_stack *stack, int *stack2)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size)
	{
		j = 0;
		while (j < stack->size)
		{
			if (stack->content[i] == j)
				stack->content[i] = stack2[j];
			j++;
		}
		i++;
	}
}*/
