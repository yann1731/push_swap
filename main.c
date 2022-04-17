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
	t_stack	stack;

	if (argc == 1)
		exit(0);
	if (argc > 2)
	{
		stack.stacka = malloc((argc - 1) * sizeof(int));
		stack.stacka = buildstack(argv, stack.stacka, argc);
		errorhandlingint(argv);
	}
	if (argc == 2)
	{
		argv = handle_single_string(argv, &argc);
		stack.stacka = malloc((argc - 1) * sizeof(int));
		stack.stacka = buildstack_single(argv, stack.stacka, argc);
		freeargv(argv);
	}
	stack.stackb = malloc((argc - 1) * sizeof(int));
	errorhandlingstack(stack);
	push_swap(stack, argc);
	free(stack.stacka);
	free(stack.stackb);
	exit(0);
}
