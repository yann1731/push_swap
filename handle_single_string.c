/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_single_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:15:36 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:15:40 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

char	**handle_single_string(char *argv[], int *argc)
{
	char	**str;

	str = ft_split(argv[1], ' ');
	errorhandlingint(str);
	*argc = argcount(str);
	return (str);
}
