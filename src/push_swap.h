/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:44:42 by jefernan          #+#    #+#             */
/*   Updated: 2022/07/05 15:59:28 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
}	t_stack;

int		check_args(int argc, char **argv);
int		init_stack(t_stack *stacks, int argc, char **argv);
int		convert_args(int argc, char **argv, int *array_nb);
int		is_int(char **argv);
int		duplicate(int argc, int *array_nb);
int		is_sorted(t_stack *stacks);
void	check_int( int argc, char **argv);
void	swap_a(t_stack *stacks);
void	rotate_a(t_stack *stacks);
void	reverse_rotate_a(t_stack *stacks);
void	swap_b(t_stack *stacks);
void	rotate_b(t_stack *stacks);
void	reverse_rotate_b(t_stack *stacks);
void	ss(t_stack *stacks);
void	rr(t_stack *stacks);
void	rrr(t_stack *stacks);
void	push_a(t_stack *stacks);
void	push_b(t_stack *stacks);
void	three_args(t_stack *stacks);
void	five_args(t_stack *stacks);
void	smallest_nb(t_stack *stacks);
int		index_nb(t_stack *stacks);
void	positive(t_stack *stacks);
long	find_small(t_stack *stacks);
void	radix(t_stack *stacks);
int		ckeck_sort(t_stack *stacks);

#endif
