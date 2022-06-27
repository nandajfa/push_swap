/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:44:42 by jefernan          #+#    #+#             */
/*   Updated: 2022/06/24 22:50:56 by jefernan         ###   ########.fr       */
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
	int size_b;
}	t_stack;

int		check_args(int argc, char **argv);
int		init_stack(t_stack *stacks, int argc, char **argv);
int		convert_args(int argc, char **argv, int *array_nb);
int		is_int(char **argv);
int		duplicate(int argc, int *array_nb);
int		is_sorted(int argc, int *array_nb);
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

#endif
