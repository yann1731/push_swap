SRCS =		argcount.c binshiftdown.c binshiftup.c bubblesort.c buildstack_single.c buildstack.c checkdupe.c \
			errorhandlingint.c errorhandlingstack.c findindex.c ft_itoa_bin.c ft_strcpy.c handle_single_string.c \
			insert_max.c insert_mid.c insert_sec_to_last.c insert_second.c intcheck.c is_rsorted.c is_sorted.c \
			large_sort.c large_sorting.c main.c mallocbinstack.c maxbinwidth.c memsizebin.c pa.c pabin.c pb.c \
			pbbin.c posnumbin.c push_swap.c ra.c rabin.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c shiftstackdown.c \
			shiftstackup.c small_sort_five.c small_sort_four.c small_sort_two.c small_sort.c sorting.c ss.c \
			stack_copy.c stackalloc.c stackrewind.c strstack_size.c strstack.c swap.c freeargv.c intchecksingle.c \
			errorhandlingintsingle.c

NAME = push_swap

OBJS +=			${SRCS:.c=.o}

CFLAGS =		-Wall -Wextra -Werror

LIBFT =			libft.a

LIBFTPATH =		libft/



OPT =			-o

DB =			-g

RM =			rm -f

CC =			gcc

.c.o:
				${CC} ${CFLAGS} ${DB} -c $< -o ${<:.c=.o}
all:			${OBJS}
				make -C ${LIBFTPATH} all
				${CC} ${CFLAGS} ${OBJS} ${LIBFTPATH}${LIBFT} ${OPT} ${NAME}
debug:			${OBJS}
				${CC} ${CFLAGS} ${OBJS} ${DB} ${OPT} ${NAME}
clean:
				make -C ${LIBFTPATH} clean
				${RM} ${OBJS}
fclean:			clean
				${RM} ${NAME} ${LIBFTPATH}${LIBFT}
re:				fclean all
.PHONY:			all clean fclean re bonus debug