/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:25:01 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:25:04 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	sorting(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	int	maxwidth;

	maxwidth = maxbinwidth(stack_a_size);
	if (stack_a_size == 2)
		small_sort_two(stack_a, stack_a_size);
	if (stack_a_size == 3)
		small_sort(stack_a, stack_a_size);
	if (stack_a_size == 4)
		small_sort_four(stack_a, stack_b, stack_a_size, stack_b_size);
	if (stack_a_size == 5)
		small_sort_five(stack_a, stack_b, stack_a_size, stack_b_size);
	if (stack_a_size > 5)
		large_sort(stack_a, stack_a_size, stack_b_size, maxwidth);
}
