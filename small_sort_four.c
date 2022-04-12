/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_four.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:24:24 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:24:28 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	small_sort_four(int *stack_a, int *stack_b,
		int stack_a_size, int stack_b_size)
{
	pb(stack_a, stack_b, &stack_a_size, &stack_b_size);
	small_sort(stack_a, stack_a_size);
	if (stack_b[0] < stack_a[0])
		pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
	if (stack_b[0] > stack_a[2])
	{
		pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
		ra(stack_a, stack_a_size);
	}
	if ((stack_b[0] > stack_a[0] && stack_b[0] < stack_a[1])
		|| (stack_b[0] > stack_a[0] && stack_b[0] < stack_a[1]))
	{
		pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
		sa(stack_a, stack_a_size);
	}
	if (stack_b[0] > stack_a[1] && stack_b[0] < stack_a[2])
	{
		rra(stack_a, stack_a_size);
		pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
		ra(stack_a, stack_a_size);
		ra(stack_a, stack_a_size);
	}
}
