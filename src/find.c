/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:31:25 by jefernan          #+#    #+#             */
/*   Updated: 2022/07/05 15:55:37 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
