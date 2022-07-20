/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:34:30 by jefernan          #+#    #+#             */
/*   Updated: 2022/07/20 22:25:30 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_args(t_stack *stacks)
{
	if (stacks->stack_a[0] > stacks->stack_a[1]
		&& stacks->stack_a[0] < stacks->stack_a[2]
		&& stacks->stack_a[1] < stacks->stack_a[2])
		swap_a(stacks);
	else if (stacks->stack_a[0] > stacks->stack_a[1]
		&& stacks->stack_a[1] > stacks->stack_a[2])
	{
		swap_a(stacks);
		reverse_rotate_a(stacks);
	}
	else if (stacks->stack_a[0] > stacks->stack_a[1]
		&& stacks->stack_a[0] > stacks->stack_a[2]
		&& stacks->stack_a[1] < stacks->stack_a[2])
		rotate_a(stacks);
	else if (stacks->stack_a[0] < stacks->stack_a[1]
		&& stacks->stack_a[1] > stacks->stack_a[2]
		&& stacks->stack_a[0] < stacks->stack_a[2])
	{
		swap_a(stacks);
		rotate_a(stacks);
	}
	else if (stacks->stack_a[0] < stacks->stack_a[1]
		&& stacks->stack_a[1] > stacks->stack_a[2]
		&& stacks->stack_a[0] > stacks->stack_a[2])
		reverse_rotate_a(stacks);
}

void	five_args(t_stack *stacks)
{
	int	i;

	i = 0;
	if (!is_sorted(stacks))
	{
		if (stacks->size_a == 5)
		{
			smallest_nb(stacks);
			push_b(stacks);
			i++;
		}
		if (stacks->size_a == 4)
		{
			smallest_nb(stacks);
			push_b(stacks);
			i++;
		}
		three_args(stacks);
		while (i != 0)
		{
			push_a(stacks);
			i--;
		}
	}
}

void	smallest_nb(t_stack *stacks)
{
	int	i;

	i = index_nb(stacks);
	while (i != 0)
	{
		if (i <= 2)
			rotate_a(stacks);
		else
			reverse_rotate_a(stacks);
		i = index_nb(stacks);
	}
}

int	index_nb(t_stack *stacks)
{
	int	i;
	int	nb_index;

	i = 0;
	nb_index = i;
	while (i < stacks->size_a)
	{
		if (stacks->stack_a[nb_index] > stacks->stack_a[i])
			nb_index = i;
		i++;
	}
	return (nb_index);
}
