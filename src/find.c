/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:31:25 by jefernan          #+#    #+#             */
/*   Updated: 2022/06/30 14:45:28 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	smallest_nb(t_stack *stacks)
{
	int		i;
	long	nb;

	nb = stacks->stack_a[0];
	i = 1;
	while (i < stacks->size_a)
	{
		if (stacks->stack_a[i] < nb)
			nb = stacks->stack_a[i];
		i++;
	}
	return (nb);
}

int	index_nb(t_stack *stacks)
{
	int		i;
	long	nb;

	nb = smallest_nb(stacks);
	i = 0;
	while (stacks->stack_a[i] != nb)
		i++;
	return (i);
}

void	positive(t_stack *stacks)
{
	int i;
	int small_nb;
	int	nb;

	nb = 0;
	small_nb = smallest_nb(stacks);
	while (nb < stacks->size_a)
	{
		i = 0;
		while (i < stacks->size_a)
		{
			if (stacks->stack_a[i] == small_nb)
			{
				stacks->stack_a[i] = nb;
				nb++;
				small_nb++;
				i = -1;
			}
			i++;
		}
		small_nb++;
	}
}
