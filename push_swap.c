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
#include "libft.h"
#include "push_swap.h"

void	push_swap(int *stack_a, int *stack_b, int argc)
{
	int stack_a_size;
	int stack_b_size;

	stack_a_size = argc - 1;
	stack_b_size = 0;
	sorting(stack_a, stack_b, stack_a_size, stack_b_size);
}
