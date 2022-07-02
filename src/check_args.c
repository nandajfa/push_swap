/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:55:52 by jefernan          #+#    #+#             */
/*   Updated: 2022/06/30 15:31:04 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(int argc, char **argv)
{
	int	*array_nb;

	array_nb = malloc(sizeof(int) * (argc - 1));
	if (array_nb == NULL)
		exit(EXIT_FAILURE);
	convert_args(argc, argv, array_nb);
	is_int(argv);
	duplicate(argc, array_nb);
	check_int(argc, argv);
	is_sorted(argc, array_nb);
	free(array_nb);
	return (0);
}

int	convert_args(int argc, char **argv, int *array_nb)
{
	int	i;

	i = 0;
	while ((i + 1) < argc)
	{
		array_nb[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (0);
}

int	is_int(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9') && argv[i][j] != '-')
			{
				write(2, "Error\n", 7);
				exit (1);
			}
			j++;
		}	
		i++;
	}
	return (0);
}

int	duplicate(int argc, int *array_nb)
{
	int	i;
	int	j;

	i = 0;
	while (i < (argc - 1))
	{
		j = i + 1;
		while (j < (argc - 1))
		{
			if (array_nb[i] == array_nb[j])
			{
				write(2, "Error\n", 7);
				free(array_nb);
				exit (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	check_int( int argc, char **argv)
{
	int			i;
	long int	number;

	i = 1;
	while (i < argc)
	{
		number = ft_atoi(argv[i]);
		if (number > 2147483647 || number < -2147483648)
		{
			write(2, "Error\n", 7);
			exit (1);
		}
		i++;
	}
}
