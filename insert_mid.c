/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_mid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:16:17 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:16:20 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	insert_mid(t_stack stack)
{
	int	*tempstack;

	tempstack = malloc(5 * sizeof(int));
	stack_copy(stack.stacka, tempstack, *stack.stackasize);
	tempstack[4] = stack.stackb[0];
	if (*stack.stackbsize == 2)
		tempstack[3] = stack.stackb[1];
	bubble_sort(tempstack, 5);
	if (stack.stacka[0] == tempstack[0] && stack.stacka[1] == tempstack[1])
	{
		ra(stack);
		pa(stack);
		sa(stack);
		rra(stack);
	}
	else
	{
		ra(stack);
		pa(stack);
		rra(stack);
	}
	free(tempstack);
}
