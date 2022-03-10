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
#include "libft.h"
#include "push_swap.h"

void	insert_mid(int *stack_a, int *stack_b,
			int *stack_a_size, int *stack_b_size)
{
	int	*tempstack;

	tempstack = malloc(5 * sizeof(int));
	stack_copy(stack_a, tempstack, *stack_a_size);
	tempstack[3] = stack_b[0];
	if (*stack_b_size == 2)
		tempstack[4] = stack_b[1];
	bubble_sort(tempstack, 5);
	if (stack_a[0] == tempstack[0] && stack_a[1] == tempstack[1])
	{
		ra(stack_a, *stack_a_size);
		pa(stack_a, stack_b, stack_a_size, stack_b_size);
		sa(stack_a, *stack_a_size);
		rra(stack_a, *stack_a_size);
	}
	else
	{
		ra(stack_a, *stack_a_size);
		pa(stack_a, stack_b, stack_a_size, stack_b_size);
		rra(stack_a, *stack_a_size);
	}
	free(tempstack);
}
