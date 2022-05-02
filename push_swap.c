/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:21:05 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:21:07 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push_swap(t_stack stack, int argc)
{
	int	stack_a;
	int	stack_b;

	stack_a = argc - 1;
	stack_b = 0;
	stack.stackasize = &stack_a;
	stack.stackbsize = &stack_b;
	if (is_sorted(stack.stacka, *stack.stackasize) == 1)
		return ;
	sorting(stack);
}
