/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:13:08 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/27 15:31:39 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size - 1)
	{
		if (stack->content[i] > stack->content[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	search(t_stack *stack, int val)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->content[i] < val)
			return (1);
		i++;
	}
	return (0);
}

int	pose(t_stack *stack, int pos)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->content[i] == pos)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

void	chunk(t_stack *stack, t_stack *stack2, int chunk)
{
	int	i;
	int	k;

	i = 0;
	k = stack->size;
	while (i < k)
	{
		if (stack->content[0] < (chunk))
			swap_main4("pb", stack, stack2);
		else
			swap_main2("ra", stack);
		if (!search(stack, (chunk)))
			break ;
		i++;
	}
}

void	chunk_auto(t_stack *stack, t_stack *stack2, int nbr)
{
	int	k;
	int	i;

	i = 0;
	k = stack->size;
	if (nbr == 8)
	{
		while (i < 8)
		{
			chunk(stack, stack2, k / 8 * i);
			i++;
		}
		chunk(stack, stack2, k);
	}
	else if (nbr == 4)
	{
		chunk(stack, stack2, k / 4);
		chunk(stack, stack2, k / 4 + k / 4);
		chunk(stack, stack2, k / 4 + k / 4 + k / 4);
		chunk(stack, stack2, k);
	}
}
