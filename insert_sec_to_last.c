/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_sec_to_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:16:31 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:16:38 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	insert_sec_to_last(t_stack stack)
{
	int	*tempstack;

	tempstack = malloc(5 * sizeof(int));
	stack_copy(stack.stacka, tempstack, *stack.stackasize);
	tempstack[4] = stack.stackb[0];
	if (*stack.stackbsize == 2)
		tempstack[3] = stack.stackb[1];
	bubble_sort(tempstack, 5);
	if (stack.stacka[*stack.stackasize - 1] == tempstack[4])
	{
		rra(stack);
		pa(stack);
		ra(stack);
		ra(stack);
	}
	else
	{
		pa(stack);
		ra(stack);
	}
	free(tempstack);
}
