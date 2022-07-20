/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:26:58 by jefernan          #+#    #+#             */
/*   Updated: 2022/07/20 22:30:18 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stack *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (!is_sorted(stacks))
	{
		j = 0;
		while (j < stacks->size_a + stacks->size_b)
		{
			if ((stacks->stack_a[0] >> i) & 1)
				rotate_a(stacks);
			else
				push_b(stacks);
			j++;
		}
		while (stacks->size_b > 0)
			push_a(stacks);
		i++;
	}
}
