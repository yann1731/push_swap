/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:25:22 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:25:24 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	stack_copy(int *to_copy, int *copy_to, int to_copy_size)
{
	while (--to_copy_size >= 0)
		copy_to[to_copy_size] = to_copy[to_copy_size];
}
