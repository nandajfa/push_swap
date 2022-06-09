/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:44:42 by jefernan          #+#    #+#             */
/*   Updated: 2022/06/09 15:12:02 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int	stack_a;
	int	len;
}	t_stack;

int		check_args(int argc, char **argv);
void	init_stack(t_stack *stacks, int argc);
int		convert_args(int argc, char **argv, int *array_nb);
int		is_int(char **argv);
int		duplicate(int argc, int *array_nb);
void	is_sorted(int argc, int *array_nb);
void	check_int(int argc, char **argv);

#endif
