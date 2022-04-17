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

void	ra(t_stack stack)
{
	int	temp;

	temp = *stack.stacka;
	shiftstackup(stack.stacka, *stack.stackasize);
	*(stack.stacka + (*stack.stackasize - 1)) = temp;
	write(1, "ra\n", 3);
}
