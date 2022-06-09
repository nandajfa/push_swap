/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:11:06 by jefernan          #+#    #+#             */
/*   Updated: 2022/06/09 14:20:10 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
//	t_stack	stacks;
	if (argc < 2)
		return (0);
//	init_stack(&stacks, argc);
	check_args(argc, argv);
	return (0);
}

//void init_stack(t_stack *stacks, int argc)
//{
//	stacks->stack_a = malloc(argc * sizeof(int));
//	stacks->len = argc - 1;
//}