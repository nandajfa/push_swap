/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:55:02 by jefernan          #+#    #+#             */
/*   Updated: 2022/07/08 21:34:47 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	positive(t_stack *stacks)
{
	int	i;
	int	small_nb;

	small_nb = find_small(stacks);
	if (small_nb < 0)
	{
		i = 0;
		small_nb *= -1;
		while (i < stacks->size_a)
		{
			stacks->stack_a[i] = stacks->stack_a[i] + small_nb;
			i++;		
		}
	}
}
	
long	find_small(t_stack *stacks)
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
