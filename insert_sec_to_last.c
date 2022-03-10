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
#include "libft.h"
#include "push_swap.h"

void	insert_sec_to_last(int *stack_a, int *stack_b,
			int *stack_a_size, int *stack_b_size)
{
	int	*tempstack;

	tempstack = malloc(5 * sizeof(int));
	stack_copy(stack_a, tempstack, *stack_a_size);
	tempstack[3] = stack_b[0];
	if (*stack_b_size == 2)
		tempstack[4] = stack_b[1];
	bubble_sort(tempstack, 5);
	if (stack_a[*(stack_a_size) - 1] == tempstack[4])
	{
		rra(stack_a, *stack_a_size);
		pa(stack_a, stack_b, stack_a_size, stack_b_size);
		ra(stack_a, *stack_a_size);
		ra(stack_a, *stack_a_size);
	}
	else
	{
		pa(stack_a, stack_b, stack_a_size, stack_b_size);
		ra(stack_a, *stack_a_size);
	}
	free(tempstack);
}
