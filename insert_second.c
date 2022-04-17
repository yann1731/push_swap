/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_second.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:16:47 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:16:50 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	insert_second(t_stack stack)
{
	int	*tempstack;

	tempstack = malloc(5 * sizeof(int));
	stack_copy(stack.stacka, tempstack, *stack.stackasize);
	tempstack[4] = stack.stackb[0];
	if (*stack.stackbsize == 2)
		tempstack[3] = stack.stackb[1];
	bubble_sort(tempstack, 5);
	pa(stack);
	if (stack.stacka[1] == tempstack[0])
		sa(stack);
	free(tempstack);
}
