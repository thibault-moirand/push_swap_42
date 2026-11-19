/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:57:13 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/29 10:12:44 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexage(t_stack *stack)
{
	long long	*stack2;

	stack2 = indexa(stack);
	replace (stack, stack2);
	sort (stack);
	free (stack2);
}

void	atoi_only(int ac, char **av, t_stack *stack)
{
	char	**temp;
	int		i;

	i = -1;
	if (ac == 2)
	{
		stack->size = cworld(av[1], ' ');
		temp = ft_split(av[1], ' ');
		stack->content = malloc(sizeof(long long) * stack->size);
		while ((++i) < stack->size)
		{
			stack->content[i] = ft_atoi(temp[i]);
			free (temp[i]);
		}
		free (temp);
	}
	else
	{
		i++;
		stack->size = (ac - 1);
		stack->content = malloc (sizeof(long long) * (ac));
		while ((++i) <= stack->size)
			stack->content[i - 1] = ft_atoi(av[i]);
	}
}

int	test(char **av)
{
	char	**temp;
	int		i;
	size_t	j;

	i = 0;
	j = -1;
	temp = ft_split(av[1], ' ');
	i = rulele(cworld(av[1], ' '), temp);
	while ((++j) < cworld(av[1], ' '))
		free (temp[j]);
	free (temp);
	return (i);
}

int	push_swap(int ac, char **av)
{
	int		i;
	t_stack	*stack;

	i = 0;
	stack = malloc(sizeof(t_stack));
	if (ac == 2)
	{
		i = test(av);
		if (i != 1)
		{
			free (stack);
			return (0);
		}
	}
	atoi_only(ac, av, stack);
	i = rule(stack);
	if (i != 1)
		return (0);
	indexage(stack);
	free (stack->content);
	free (stack);
	return (1);
}

int	main(int ac, char **av)
{
	int	verif;

	verif = 0;
	if (ac == 2)
		verif = one_ac(av[1]);
	if (verif == 0)
	{
		verif = rulel(ac, av);
		if (ac < 2)
			return (1);
		if (verif != 1)
		{
			write(2, "error", 5);
			return (0);
		}
	}
	verif = push_swap(ac, av);
	if (verif != 1)
	{
		write(2, "Error", 5);
		return (0);
	}
	return (1);
}
