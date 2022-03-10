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
			int *stack_a_size, int *stack_b_size, int *tempstack)
{
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
}
