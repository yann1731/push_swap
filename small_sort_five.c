/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:24:10 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:24:13 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	small_sort_five(int *stack_a, int *stack_b,
		int stack_a_size, int stack_b_size)
{
	int	*tempstack;

	tempstack = malloc(stack_a_size * sizeof(int));
	stack_copy(stack_a, tempstack, stack_a_size);
	bubble_sort(tempstack, stack_a_size);
	pb(stack_a, stack_b, &stack_a_size, &stack_b_size);
	pb(stack_a, stack_b, &stack_a_size, &stack_b_size);
	small_sort(stack_a, stack_a_size);
	while (is_sorted(stack_a, stack_a_size) == 0 || stack_b_size != 0)
	{
		if (stack_b[0] == tempstack[0])
			pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
		if (stack_b[0] == tempstack[1])
			insert_second(stack_a, stack_b, &stack_a_size,
				&stack_b_size, tempstack);
		if (stack_b[0] == tempstack[2])
			insert_mid(stack_a, stack_b, &stack_a_size,
				&stack_b_size, tempstack);
		if (stack_b[0] == tempstack[3])
			insert_sec_to_last(stack_a, stack_b, &stack_a_size,
				&stack_b_size, tempstack);
		if (stack_b[0] == tempstack[4])
			insert_max(stack_a, stack_b, &stack_a_size, &stack_b_size);
	}
}
