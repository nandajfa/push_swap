/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_both.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:46:23 by jefernan          #+#    #+#             */
/*   Updated: 2022/06/24 22:50:17 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *stacks)
{
	swap_a(stacks);
	swap_b(stacks);
	write(1, "ss\n", 3);
}

void	rr(t_stack *stacks)
{
	rotate_a(stacks);
	rotate_b(stacks);
	write(1, "rr\n", 3);
}

void	rrr(t_stack *stacks)
{
	reverse_rotate_a(stacks);
	reverse_rotate_b(stacks);
	write(1, "rrr\n", 4);
}
