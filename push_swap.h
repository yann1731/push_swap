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

int		intcheck(char **str);
int		*buildstack(char *argv[], int *stack, int argc);
void	push_swap(int *stack_a, int *stack_b, int argc);
int		checkdupe(int *stack, int argc);
void	errorhandlingint(char *argv[]);
void	errorhandlingstack(int *stack_a, int *stack_b);
void	shiftstackup(int *stack, int stacksize);
void	shiftstackdown(int *stack, int stacksize);
int		is_sorted(int *stack_a, int stack_a_size);
void	smallsort(int *stack_a, int stack_a_size);
void	pa(int *stack_a, int *stack_b, int *stack_a_size,
			int *stack_b_size);
void	pb(int *stack_a, int *stack_b, int *stack_a_size,
			int *stack_b_size);
void	sa(int *stack_a, int stack_a_size);
void	sb(int *stack_b, int stack_b_size);
void	ss(int *stack_a, int *stack_b,
			int stack_a_size, int stack_b_size);
void	ra(int *stack_a, int stack_a_size);
void	rb(int *stack_b, int stack_b_size);
void	rr(int *stack_a, int *stack_b,
			int stack_a_size, int stack_b_size);
void	rra(int *stack_a, int stack_a_size);
void	rrb(int *stack_b, int stack_b_size);
void	rrr(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size);
void	sorting(int *stack_a, int *stack_b,
			int stack_a_size, int stack_b_size);
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
void	small_sort_two(int *stack_a, int stack_a_size);
void	small_sort(int *stack_a, int stack_a_size);
void	stack_copy(int *to_copy, int *copy_to, int to_copy_size);
void	insert_second(int *stack_a, int *stack_b,
			int *stack_a_size, int *stack_b_size);
void	insert_mid(int *stack_a, int *stack_b,
			int *stack_a_size, int *stack_b_size);
void	insert_sec_to_last(int *stack_a, int *stack_b,
			int *stack_a_size, int *stack_b_size);
void	insert_max(int *stack_a, int *stack_b,
			int *stack_a_size, int *stack_b_size);
char	**strstack(int *stack_a, int stack_a_size);
void	stackrewind(char **binstack_a, char **binstack_b,
			int *counter, int *bit);
void	large_sorting(char **binstack_a, char **binstack_b,
			int bit);
void	large_sort(int *stack_a, int stack_a_size, int bit);
void	small_sort_five(int *stack_a, int *stack_b,
			int stack_a_size, int stack_b_size);
int		strstack_size(char **binstack);
void	rabin(char **stack_a);
void	small_sort_four(int *stack_a, int *stack_b,
		int stack_a_size, int stack_b_size);

#endif