/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:56:13 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/28 17:55:44 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max(char *s)
{
	if (s[0] == '-')
	{
		if (ft_strlen(s) > 11)
			return (0);
		if (ft_strlen(s) < 11)
			return (1);
		if (s[1] >= '2' && s[2] >= '1' && s[3] >= '4')
			if (s[4] >= '7' && s[5] >= '4' && s[6] >= '8')
				if (s[7] >= '3' && s[8] >= '6' && s[9] >= '4')
					if (s[10] > '7')
						return (0);
	}
	else
	{
		if (ft_strlen(s) > 10)
			return (0);
		if (ft_strlen(s) < 10)
			return (1);
		if (s[0] >= '2' && s[1] >= '1' && s[2] >= '4')
			if (s[3] >= '7' && s[4] >= '4' && s[5] >= '8')
				if (s[6] >= '3' && s[7] >= '6' && s[8] >= '4')
					if (s[9] > '7')
						return (0);
	}
	return (1);
}

int	rule(t_stack *stack)
{
	int			i;
	int			j;
	long long	*stack2;

	i = 0;
	stack2 = indexa(stack);
	while (i < stack->size)
	{
		j = i + 1;
		while (j < stack->size)
		{
			if (stack2[j] == stack2[i])
			{
				free (stack2);
				free (stack->content);
				free (stack);
				return (0);
			}
			j++;
		}
		i++;
	}
	free (stack2);
	return (1);
}

int	rulel(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		if (!max(av[i]))
			return (0);
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	rulele(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ac)
	{
		if (!max(av[i]))
			return (0);
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	one_ac(char *av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[i])
	{
		if (av[i] == ' ')
			j++;
		i++;
	}
	if (j > 0)
		return (1);
	else
		return (0);
}
