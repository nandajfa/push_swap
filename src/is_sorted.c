/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:29:23 by jefernan          #+#    #+#             */
/*   Updated: 2022/07/02 22:50:11 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stacks)
{
	int	i;

	i = 0;
	while (i < (stacks->size_a - 1))
	{
		if (stacks->stack_a[i] > stacks->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
