NAME := push_swap

MAIN := main/

CC := gcc

CFLAGS := -Wall -Wextra -Werror

SRCS := ${wildcard *.c}

SRC_MAIN := ${wildcard ${MAIN}*.c}

LIBFT_MAKE := make -C libft

LIBFT := libft/libft.a

INCLUDE := -I libft/include -I .

HEADER := ${NAME}.h ps_operator.h

RM := rm -rf

BONUS := checker

OBJ_DIR := obj/

OBJS := ${patsubst %.c, ${OBJ_DIR}%.o, ${SRCS}}

${OBJ_DIR}%.o : %.c ${HEADER}
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

OBJS_MAIN := ${patsubst %.c, %.o, ${SRC_MAIN}}

${MAIN}%.o : ${MAIN}%.c ${HEADER}
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

all : ${OBJ_DIR} ${NAME}

bonus : ${OBJ_DIR} ${BONUS}

${OBJ_DIR} :
	mkdir $@

${NAME} : ${OBJS} ${OBJS_MAIN}
	${LIBFT_MAKE}
	${CC} ${CFLAGS} -o $@ ${OBJS} ${LIBFT} ${MAIN}main.o

san :
	${CC} ${CFLAGS} -o ${NAME} ${SRCS} ${LIBFT} ${INCLUDE} ${MAIN}main.c -g3 -fsanitize=address

${BONUS} : ${OBJS} ${OBJS_MAIN}
	${LIBFT_MAKE}
	${CC} ${CFLAGS} -o ${BONUS} ${OBJS} ${LIBFT} ${MAIN}${BONUS}.o

${BONUS}san :
	${LIBFT_MAKE}
	${CC} ${CFLAGS} -o ${BONUS} ${SRCS} ${LIBFT} ${MAIN}${BONUS}.c ${INCLUDE} -g3 -fsanitize=address

clean :
	${LIBFT_MAKE} clean
	${RM} ${OBJ_DIR} ${OBJS_MAIN}

fclean : clean
	${LIBFT_MAKE} fclean
	${RM} ${NAME} ${BONUS}

re : fclean all

test :
	${LIBFT_MAKE} test

norm :
	norminette ${SRCS} ${HEADER} ${SRC_MAIN}
