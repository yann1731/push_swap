/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rabin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:35:48 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 22:35:51 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	rabin(char **stack_a)
{
	char	*temp;
	int		stack_a_size;

	stack_a_size = strstack_size(stack_a);
	temp = ft_strdup(stack_a[0]);
	binshiftup(stack_a, stack_a_size);
	ft_strcpy(stack_a[stack_a_size - 1], temp);
	write(1, "ra\n", 3);
	free(temp);
}
