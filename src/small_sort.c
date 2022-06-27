/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:34:30 by jefernan          #+#    #+#             */
/*   Updated: 2022/06/27 14:30:03 by jefernan         ###   ########.fr       */
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




