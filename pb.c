/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:20:25 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:20:28 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	pb(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size)
{
	if (*stack_a_size != 0)
	{
		shiftstackdown(stack_b, *stack_b_size);
		*stack_b = *stack_a;
		shiftstackup(stack_a, *stack_a_size);
		*stack_b_size += 1;
		*stack_a_size -= 1;
	}
	write(1, "pb\n", 3);
}
