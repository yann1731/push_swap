/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:05:47 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:05:50 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"

void	bubble_sort(int *to_sort, int stack_size)
{
	int	j;

	j = 0;
	while (is_sorted(to_sort, stack_size) == 0)
	{
		while (j < (stack_size - 1))
		{
			if (to_sort[j] > to_sort[j + 1])
				swap(&to_sort[j], &to_sort[j + 1]);
		j++;
		}
	j = 0;
	}
}
