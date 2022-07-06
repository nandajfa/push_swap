/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:34:30 by jefernan          #+#    #+#             */
/*   Updated: 2022/07/05 23:16:31 by jefernan         ###   ########.fr       */
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
