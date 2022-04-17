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
#include "push_swap.h"

void	small_sort_five(t_stack stack)
{
	int	*tempstack;

	tempstack = malloc(*stack.stackasize * sizeof(int));
	stack_copy(stack.stacka, tempstack, *stack.stackasize);
	bubble_sort(tempstack, *stack.stackasize);
	pb(stack);
	pb(stack);
	small_sort(stack);
	while (is_sorted(stack.stacka, *stack.stackasize) == 0 || *stack.stackbsize != 0)
	{
		if (stack.stackb[0] == tempstack[0] && *stack.stackbsize > 0)
			pa(stack);
		if (stack.stackb[0] == tempstack[1] && *stack.stackbsize > 0)
			insert_second(stack);
		if (stack.stackb[0] == tempstack[2] && *stack.stackbsize > 0)
			insert_mid(stack);
		if (stack.stackb[0] == tempstack[3] && *stack.stackbsize > 0)
			insert_sec_to_last(stack);
		if (stack.stackb[0] == tempstack[4] && *stack.stackbsize > 0)
			insert_max(stack);
	}
	free(tempstack);
}
