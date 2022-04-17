/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:23:59 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:24:01 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	small_sort(t_stack stack)
{
	if (stack.stacka[0] > stack.stacka[1] && stack.stacka[1]
		< stack.stacka[2] && stack.stacka[0] < stack.stacka[2])
		sa(stack);
	if (is_rsorted(stack.stacka, *stack.stackasize) == 1)
	{
		sa(stack);
		rra(stack);
	}
	if (stack.stacka[0] > stack.stacka[1] && stack.stacka[1]
		< stack.stacka[2] && stack.stacka[0] > stack.stacka[2])
		ra(stack);
	if (stack.stacka[0] < stack.stacka[1] && stack.stacka[1]
		> stack.stacka[2] && stack.stacka[0] < stack.stacka[2])
	{
		sa(stack);
		ra(stack);
	}
	if (stack.stacka[0] < stack.stacka[1] && stack.stacka[1]
		> stack.stacka[2] && stack.stacka[0] > stack.stacka[2])
		rra(stack);
}
