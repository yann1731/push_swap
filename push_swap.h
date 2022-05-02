/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:21:17 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:21:45 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int	*stacka;
	int	*stackb;
	int	*stackasize;
	int	*stackbsize;
}	t_stack;

int		intcheck(char **str);
int		*buildstack(char *argv[], int *stack, int argc);
void	push_swap(t_stack stack, int argc);
int		checkdupe(int *stack, int argc);
void	errorhandlingint(char *argv[]);
void	errorhandlingstack(t_stack stack);
void	shiftstackup(int *stack, int stacksize);
void	shiftstackdown(int *stack, int stacksize);
int		is_sorted(int *stack_a, int stack_a_size);
void	smallsort(t_stack stack);
void	pa(t_stack stack);
void	pb(t_stack stack);
void	sa(t_stack stack);
void	sb(t_stack stack);
void	ss(t_stack stack);
void	ra(t_stack stack);
void	rb(t_stack stack);
void	rr(t_stack stack);
void	rra(t_stack stack);
void	rrb(t_stack stack);
void	rrr(t_stack stack);
void	sorting(t_stack stack);
int		maxbinwidth(int nb);
char	**mallocbinstack(int stack_a_size);
int		findindex(int *stack_a, int tofind, int stack_a_size);
void	ft_strcpy(char *dst, const char *src);
void	binshiftup(char **binstack, int stacksize);
void	binshiftdown(char **binstack, int stacksize);
void	pabin(char **binstack_a, char **binstack_b);
void	pbbin(char **binstack_a, char **binstack_b);
int		memsizebin(unsigned long long n);
char	*posnumbin(unsigned long long n, char *str, int maxwidth);
char	*ft_itoa_bin(unsigned long long n, int maxwidth);
int		is_rsorted(int *stack_b, int stack_b_size);
int		*buildstack_single(char *argv[], int *stack, int argc);
int		argcount(char **str);
char	**handle_single_string(char *argv[], int *argc);
void	swap(int *a, int *b);
void	bubble_sort(int *to_sort, int stack_size);
void	small_sort_two(t_stack stack);
void	small_sort(t_stack stack);
void	stack_copy(int *to_copy, int *copy_to, int to_copy_size);
void	insert_second(t_stack stack);
void	insert_mid(t_stack stack);
void	insert_sec_to_last(t_stack stack);
void	insert_max(t_stack stack);
char	**strstack(int *stack_a, int stack_a_size);
void	stackrewind(char **binstack_a, char **binstack_b,
			int *counter, int *bit);
void	large_sorting(char **binstack_a, char **binstack_b,
			int bit);
void	large_sort(int *stack_a, int stack_a_size, int bit);
void	small_sort_five(t_stack stack);
int		strstack_size(char **binstack);
void	rabin(char **stack_a);
void	small_sort_four(t_stack stack);
void	freeargv(char **argv);
int		intchecksingle(char **str);
void	errorhandlingintsingle(char *argv[]);

#endif