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

void	small_sort_four(t_stack stack)
{
	pb(stack);
	small_sort(stack);
	if (stack.stackb[0] < stack.stacka[0])
		pa(stack);
	if (stack.stackb[0] > stack.stacka[2])
	{
		pa(stack);
		ra(stack);
	}
	if ((stack.stackb[0] > stack.stacka[0] && stack.stackb[0] < stack.stacka[1])
		|| (stack.stackb[0] > stack.stacka[0]
			&& stack.stackb[0] < stack.stacka[1]))
	{
		pa(stack);
		sa(stack);
	}
	if (stack.stackb[0] > stack.stacka[1] && stack.stackb[0] < stack.stacka[2])
	{
		rra(stack);
		pa(stack);
		ra(stack);
		ra(stack);
	}
}
