/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:19:42 by jefernan          #+#    #+#             */
/*   Updated: 2022/07/10 17:14:27 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stacks)
{
	int	temp;

	temp = stacks->stack_a[0];
	stacks->stack_a[0] = stacks->stack_a[1];
	stacks->stack_a[1] = temp;
	write(1, "sa\n", 3);
}

void	rotate_a(t_stack *stacks)
{
	int	temp;
	int	i;

	temp = stacks->stack_a[0];
	i = 0;
	while (i < stacks->size_a)
	{
		stacks->stack_a[i] = stacks->stack_a[i + 1];
		i++;
	}
	stacks->stack_a[stacks->size_a - 1] = temp;
	write(1, "ra\n", 3);
}

void	reverse_rotate_a(t_stack *stacks)
{
	int	temp;
	int	i;

	temp = stacks->stack_a[stacks->size_a - 1];
	i = stacks->size_a;
	while (i > 0)
	{
		stacks->stack_a[i] = stacks->stack_a[i - 1];
		i--;
	}
	stacks->stack_a[0] = temp;
	write(1, "rra\n", 4);
}

void	push_a(t_stack *stacks)
{
	int	i;

	if (stacks->size_b == 0)
		return ;
	if (stacks->size_a == 0)
		stacks->stack_a[0] = stacks->stack_b[0];
		
	else
	{
		i = stacks->size_a;
		while (i > 0)
		{
			stacks->stack_a[i] = stacks->stack_a[i - 1];
			i--;
		}
		stacks->stack_a[0] = stacks->stack_b[0];
	}
	i = 0;
	while (i < stacks->size_b)
	{
		stacks->stack_b[i] = stacks->stack_b[i + 1];
		i++;
	}
	stacks->size_b--;
	stacks->size_a++;
	write(1, "pa\n", 3);
}
