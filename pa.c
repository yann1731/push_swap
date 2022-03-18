/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:19:58 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:20:01 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"

void	pa(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size)
{
	if (*stack_b_size != 0)
	{
		shiftstackdown(stack_a, *stack_a_size);
		*stack_a = *stack_b;
		shiftstackup(stack_b, *stack_b_size);
		*stack_a_size += 1;
		*stack_b_size -= 1;
	}
	write(1, "pa\n", 3);
}
