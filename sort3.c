/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:13:08 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/27 15:31:04 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_auto2(t_stack *stack, t_stack *stack2, int nbr)
{
	int	k;
	int	i;

	i = 1;
	k = stack->size;
	if (nbr == 11)
	{
		while (i < 11)
		{
			chunk(stack, stack2, k / 11 * i);
			i++;
		}
		chunk(stack, stack2, k);
	}
	else if (nbr == 5)
	{
		while (i < 5)
		{
			chunk(stack, stack2, k / 5 * i);
			i++;
		}
		chunk(stack, stack2, k);
	}
}
