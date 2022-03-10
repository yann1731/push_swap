/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:25:31 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:25:33 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

int	*stackalloc(int argc)
{
	int	*stack;

	stack = malloc(argc * sizeof(int));
	if (stack == NULL)
		return (NULL);
	return (stack);
}
