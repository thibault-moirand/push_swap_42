/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:57:49 by tmoirand          #+#    #+#             */
/*   Updated: 2023/11/28 17:51:48 by tmoirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

typedef struct s_stack
{
	long long	*content;
	int			size;
}	t_stack;

void		sa(t_stack *stack);
void		pa(t_stack *stack, t_stack *stack2);
void		ra(t_stack *stack);
void		rra(t_stack *stack);
void		ss(t_stack *stack, t_stack *stack2);
void		rr(t_stack *stack, t_stack *stack2);
void		rrr(t_stack *stack, t_stack *stack2);

long long	*malloc_plus(t_stack *stack);
long long	*malloc_moins(t_stack *stack);
long long	*ft_strdup(t_stack *src);
long long	ft_atoi(const char *str);
int			frreee(t_stack *stack);

int			ft_strlen(const char *s);
int			ft_strcmp(char *a, char *b);

long long	*indexa(t_stack *stack);
void		replace(t_stack *stack, long long *stack2);

int			rule(t_stack *stack);
int			rulel(int ac, char **av);
int			one_ac(char *av);
int			rulele(int ac, char **av);

void		sort(t_stack *stack);

void		swap_main(char *rule, t_stack *stack);
void		swap_main2(char *rule, t_stack *stack);
void		swap_main3(char *rule, t_stack *stack, t_stack *stack2);
void		swap_main4(char *rule, t_stack *stack, t_stack *stack2);

int			is_sort(t_stack *stack);
int			search(t_stack *stack, int val);
int			pose(t_stack *stack, int pos);
void		chunk(t_stack *stack, t_stack *stack2, int chunk);
void		chunk_auto(t_stack *stack, t_stack *stack2, int nbr);

void		chunk_auto2(t_stack *stack, t_stack *stack2, int nbr);

char		**ft_split(char const *s, char c);
size_t		cworld(char const *s, char c);
void		*ft_calloc(size_t num_elements, size_t element_size);
#endif
