/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:15:56 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:16:03 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	insert_max(int *stack_a, int *stack_b,
			int *stack_a_size, int *stack_b_size)
{
	pa(stack_a, stack_b, stack_a_size, stack_b_size);
	ra(stack_a, *stack_a_size);
}
