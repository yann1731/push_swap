/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:19:16 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:19:19 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		*stack_a;
	int		*stack_b;

	if (argc == 1)
		exit(0);
	if (argc > 2)
	{
		stack_a = malloc((argc - 1) * sizeof(int));
		stack_a = buildstack(argv, stack_a, argc);
		errorhandlingint(argv);
	}
	if (argc == 2)
	{
		argv = handle_single_string(argv, &argc);
		stack_a = malloc((argc - 1) * sizeof(int));
		stack_a = buildstack_single(argv, stack_a, argc);
		freeargv(argv);
	}
	stack_b = malloc((argc - 1) * sizeof(int));
	errorhandlingstack(stack_a, stack_b);
	push_swap(stack_a, stack_b, argc);
	free(stack_a);
	free(stack_b);
	exit(0);
}
