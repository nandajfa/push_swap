/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:34:30 by jefernan          #+#    #+#             */
/*   Updated: 2022/06/30 14:45:01 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_args(t_stack *stacks)
{
	if (stacks->stack_a[2] > stacks->stack_a[1])
		swap_a(stacks);
	if (stacks->stack_a[0] < stacks->stack_a[1])
	{
		reverse_rotate_a(stacks);
		if (stacks->stack_a[1] < stacks->stack_a[2])
			swap_a(stacks);
	}
}

void	four_args(t_stack *stacks)
{
	int	i;
	int	index;

	index = index_nb(stacks);
	if (index >= 2)
		i = index;
	else
		i = stacks->size_a - index;
	while (i < stacks->size_a)
	{
		if (index < 2)
			rotate_a(stacks);
		else
			reverse_rotate_a(stacks);
		i++;
	}
	push_b(stacks);
	three_args(stacks);
	push_a(stacks);
}

void	five_args(t_stack *stacks)
{
	int	i;
	int	index;

	while (stacks->size_a != 3)
	{
		index = index_nb(stacks);
		if (index < stacks->size_a / 2)
		{
			i = -1;
			while (i++ < index)
				rotate_a(stacks);
		}
		else
		{
			i = stacks->size_a - index;
			while (i-- > 0)
				reverse_rotate_a(stacks);
		}
		push_b(stacks);
	}
	swap_b(stacks);
	three_args(stacks);
	push_a(stacks);
	push_a(stacks);
}
