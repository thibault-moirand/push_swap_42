/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:28:45 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/23 15:40:34 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_main(char *rule, t_stack *stack)
{
	if ((ft_strcmp(rule, "sa")) == 1)
	{
		write(1, "sa\n", 3);
		sa(stack);
	}
	else if ((ft_strcmp(rule, "sb")) == 1)
	{
		write(1, "sb\n", 3);
		sa(stack);
	}
	else if ((ft_strcmp(rule, "rra")) == 1)
	{
		write(1, "rra\n", 4);
		rra(stack);
	}
	else if ((ft_strcmp(rule, "rrb")) == 1)
	{
		write(1, "rrb\n", 4);
		rra(stack);
	}
}

void	swap_main2(char *rule, t_stack *stack)
{
	if ((ft_strcmp(rule, "ra")) == 1)
	{
		write(1, "ra\n", 3);
		ra(stack);
	}
	else if ((ft_strcmp(rule, "rb")) == 1)
	{
		write(1, "rb\n", 3);
		ra(stack);
	}
}

void	swap_main3(char *rule, t_stack *stack, t_stack *stack2)
{
	if ((ft_strcmp(rule, "ss")) == 1)
	{
		write(1, "ss\n", 3);
		ss(stack, stack2);
	}
	else if ((ft_strcmp(rule, "rr")) == 1)
	{
		write(1, "rr\n", 3);
		rr(stack, stack2);
	}
	else if ((ft_strcmp(rule, "rrr")) == 1)
	{
		write(1, "rrr\n", 4);
		rrr(stack, stack2);
	}
}

void	swap_main4(char *rule, t_stack *stack, t_stack *stack2)
{
	if ((ft_strcmp(rule, "pa")) == 1)
	{
		write(1, "pa\n", 3);
		pa(stack, stack2);
	}
	else if ((ft_strcmp(rule, "pb")) == 1)
	{
		write(1, "pb\n", 3);
		pa(stack2, stack);
	}
}
