#include "stdlib.h"

int		intcheck(char **str);
int		*buildstack(char *argv[], int *stack, int argc);
void	push_swap(int *stack_a, int *stack_b, int argc);
int		checkdupe(int *stack, int argc);
void	errorhandlingint(char *argv[]);
void	errorhandlingstack(int *stack_a, int *stack_b);
void	shiftstackup(int *stack, int *stacksize);
void	shiftstackdown(int *stack, int *stacksize);
void	sa(int *stack_a, int stack_a_size);
void	sb(int *stack_b, int stack_b_size);
void	ss(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size);
void	ra(int *stack_a, int *stack_a_size);
void	rb(int *stack_b, int *stack_b_size);
void	rr(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size);
void	rra(int *stack_a, int *stack_a_size);
void	rrb(int *stack_b, int *stack_b_size);
void	rrr(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size);
void	sorting(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size);