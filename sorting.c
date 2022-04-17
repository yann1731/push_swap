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
#include "push_swap.h"

void	sorting(t_stack stack)
{
	int	maxwidth;

	maxwidth = maxbinwidth(*stack.stackasize);
	if (*stack.stackasize == 2)
		small_sort_two(stack);
	if (*stack.stackasize == 3)
		small_sort(stack);
	if (*stack.stackasize == 4)
		small_sort_four(stack);
	if (*stack.stackasize == 5)
		small_sort_five(stack);
	if (*stack.stackasize > 5)
		large_sort(stack.stacka, *stack.stackasize, maxwidth);
}
