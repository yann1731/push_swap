/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:21:56 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:22:00 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ra(int *stack_a, int stack_a_size)
{
	int	temp;

	temp = *stack_a;
	shiftstackup(stack_a, stack_a_size);
	*(stack_a + (stack_a_size - 1)) = temp;
	write(1, "ra\n", 3);
}
