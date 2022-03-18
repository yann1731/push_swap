/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxbinwidth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:19:35 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:19:39 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"

int	maxbinwidth(int nb)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		nb /= 2;
		i++;
	}
	return (i);
}
