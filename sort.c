/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:13:08 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/27 15:29:17 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*void	print(t_stack *stack, t_stack *stack2)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		printf("a:		%i\n", stack->content[i]);
		i++;
	}
	i = 0;
	while (i < stack2->size)
	{
		printf("b:			%i\n", stack2->content[i]);
		i++;
	}
}*/

void	retur(t_stack *stack, t_stack *stack2)
{
	int	k;

	k = stack2->size - 1;
	while (k >= 0)
	{
		if (stack2->content[0] == k)
		{
			swap_main4("pa", stack, stack2);
			k--;
		}
		else if (stack2->size / 2 > pose(stack2, k))
			swap_main2("rb", stack2);
		else
			swap_main("rrb", stack2);
	}
}

void	sort_for_2(t_stack *stack)
{
	if (stack->content[0] > stack->content[1])
		swap_main("sa", stack);
}

void	sort_for_3(t_stack *stack)
{
	if (stack->content[0] > stack->content[1] && stack->content[1]
		< stack->content[2] && stack->content[0] < stack->content[2])
		swap_main("sa", stack);
	else if (stack->content[0] > stack->content[1]
		&& stack->content[1] > stack->content[2]
		&& stack->content[0] > stack->content[2])
	{
		swap_main("sa", stack);
		swap_main("rra", stack);
	}
	else if (stack->content[0] > stack->content[1]
		&& stack->content[1] < stack->content[2]
		&& stack->content[0] > stack->content[2])
		swap_main2("ra", stack);
	else if (stack->content[0] < stack->content[1]
		&& stack->content[1] > stack->content[2]
		&& stack->content[0] < stack->content[2])
	{
		swap_main("sa", stack);
		swap_main2("ra", stack);
	}
	else if (stack->content[0] < stack->content[1]
		&& stack->content[1] > stack->content[2]
		&& stack->content[0] > stack->content[2])
		swap_main("rra", stack);
}

void	sort2(t_stack *stack, t_stack *stack2, int k)
{
	if (k > 5)
		chunk_auto(stack, stack2, 4);
	else if (k == 2)
		swap_main("sa", stack);
	else if (k == 3)
		sort_for_3(stack);
	else if (k == 4)
	{
		chunk(stack, stack2, k / 2);
		sort_for_2(stack);
	}
	else if (k == 5)
	{
		chunk(stack, stack2, k / 2);
		sort_for_3(stack);
	}
}

void	sort(t_stack *stack)
{
	int		k;
	t_stack	*stack2;

	stack2 = malloc(sizeof(t_stack));
	stack2->size = 0;
	stack2->content = NULL;
	k = stack->size;
	if (!is_sort(stack))
	{
		if (k < 8)
			sort2(stack, stack2, k);
		else if (k > 100)
			chunk_auto2(stack, stack2, 11);
		else
			chunk_auto2(stack, stack2, 5);
		retur(stack, stack2);
	}
	free (stack2->content);
	free (stack2);
}
