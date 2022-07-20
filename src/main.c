/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:11:06 by jefernan          #+#    #+#             */
/*   Updated: 2022/07/20 22:28:23 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stacks;

	if (argc < 2)
		return (0);
	check_args(argc, argv);
	init_stack(&stacks, argc, argv);
	if (stacks.size_a == 2 && !is_sorted(&stacks))
		swap_a(&stacks);
	else if (stacks.size_a == 3 && !is_sorted(&stacks))
		three_args(&stacks);
	else if (stacks.size_a == 5)
		five_args(&stacks);
	else if (stacks.size_a > 5)
		radix(&stacks);
	free(stacks.stack_a);
	free(stacks.stack_b);
	return (0);
}

int	init_stack(t_stack *stacks, int argc, char **argv)
{
	int	i;

	stacks->stack_a = malloc(sizeof(int) * argc);
	stacks->stack_b = malloc(sizeof(int) * argc);
	stacks->size_a = argc - 1;
	stacks->size_b = 0;
	if (!stacks->stack_a || !stacks->stack_b)
		return (1);
	i = 0;
	while ((i + 1) < argc)
	{
		stacks->stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	positive(stacks);
	return (0);
}

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