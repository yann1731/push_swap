/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:22:09 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:22:16 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rb(t_stack stack)
{
	int	temp;

	temp = *stack.stackb;
	shiftstackup(stack.stackb, *stack.stackbsize);
	*(stack.stackb + *stack.stackbsize) = temp;
	write(1, "rb\n", 3);
}
