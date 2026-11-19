/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:56:51 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/28 17:07:37 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	temp;

	if (stack->size > 1)
	{
		temp = stack->content[0];
		stack->content[0] = stack->content[1];
		stack->content[1] = temp;
	}
}

void	pa(t_stack *stack, t_stack *stack2)
{
	int	temp;

	if (stack2->size > 0)
	{
		temp = stack2->content[0];
		stack->content = malloc_plus(stack);
		stack2->content = malloc_moins(stack2);
		stack->content[0] = temp;
	}
}

void	rra(t_stack *stack)
{
	int	i;
	int	temp;

	if (stack->size <= 1)
		return ;
	i = stack->size - 1;
	temp = stack->content[stack->size - 1];
	while (i > 0)
	{
		stack->content[i] = stack->content[i - 1];
		i--;
	}
	stack->content[0] = temp;
}

void	ra(t_stack *stack)
{
	int			i;
	long long	*temp;

	i = 0;
	temp = ft_strdup(stack);
	while (i < stack->size - 1)
	{
		stack->content[i] = temp[i + 1];
		i++;
	}
	stack->content[i] = temp[0];
	free (temp);
}
