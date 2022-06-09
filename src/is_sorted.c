/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:29:23 by jefernan          #+#    #+#             */
/*   Updated: 2022/06/09 14:23:27 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_sorted(int argc, int *array_nb)
{
	int	i;
	int	next;

	i = 0;
	while (i < (argc - 1))
	{
		next = i + 1;
		while (next < (argc - 1))
		{
			if (array_nb[next] < array_nb[i])
				exit (1);
			next++;
		}
		i++;
	}
}
