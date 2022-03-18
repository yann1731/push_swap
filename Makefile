SRCS =		argcount.c binshiftdown.c binshiftup.c bubblesort.c buildstack_single.c buildstack.c checkdupe.c \
			errorhandlingint.c errorhandlingstack.c findindex.c ft_itoa_bin.c ft_strcpy.c handle_single_string.c \
			insert_max.c insert_mid.c insert_sec_to_last.c insert_second.c intcheck.c is_rsorted.c is_sorted.c \
			large_sort.c large_sorting.c main.c mallocbinstack.c maxbinwidth.c memsizebin.c pa.c pabin.c pb.c \
			pbbin.c posnumbin.c push_swap.c ra.c rabin.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c shiftstackdown.c \
			shiftstackup.c small_sort_five.c small_sort_four.c small_sort_two.c small_sort.c sorting.c ss.c \
			stack_copy.c stackalloc.c stackrewind.c strstack_size.c strstack.c swap.c freeargv.c

SRCS_LIBFT =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
				ft_itoa.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
				ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
				ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
				ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

NAME = push_swap

OBJS +=			${SRCS:.c=.o}
OBJS +=			${addprefix ${LIBFT_PATH},${SRCS_LIBFT:.c=.o}}

LIBFT_PATH =	libft/

CFLAGS =		-Wall -Wextra -Werror

OPT =			-o

DB =			-g

RM =			rm -f

CC =			gcc

.c.o:
				${CC} ${CFLAGS} ${DB} -c $< -o ${<:.c=.o}
all:			${OBJS}
				${CC} ${CFLAGS} ${OBJS} ${DB} ${OPT} ${NAME}
debug:			${OBJS}
				${CC} ${CFLAGS} ${OBJS} ${DB} ${OPT} ${NAME}
clean:
				${RM} ${OBJS}
fclean:			clean
				${RM} ${NAME}
re:				fclean all
.PHONY:			all clean fclean re bonus debug