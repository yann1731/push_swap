/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argcount.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:04:57 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:05:38 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"

int	argcount(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}
