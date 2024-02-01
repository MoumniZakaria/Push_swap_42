# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 15:44:53 by zmoumni           #+#    #+#              #
#    Updated: 2024/01/31 14:28:22 by zmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	push_swap
NAME_BONUS 	=	checker
CC 		=	cc

HEADER 	=	push_swap.h

CFLAGS 	= 	-Wall -Wextra -Werror

SRC 	=	push_swap.c \
			parsing.c \
			ft_atoi.c \
			ft_split.c \
			ft_strjoin.c \
			lst_add_back.c \
			lst_add_front.c \
			lst_last.c \
			lst_new.c \
			list.c \
			lst_delone.c \
			lst_size.c \
			push.c \
			rotate.c \
			swap.c \
			rev_rotate.c \
			end.c \
			sort.c \
			get_lis.c \
			index_b.c \
			find_b_place.c \
			end_sort.c \

BSRC	=	checker.c \
			get_next_line_utils.c \
			get_next_line.c \
			parsing.c \
			ft_atoi.c \
			ft_split.c \
			ft_strjoin.c \
			lst_add_back.c \
			lst_add_front.c \
			lst_last.c \
			lst_new.c \
			list.c \
			lst_delone.c \
			lst_size.c \
			push.c \
			rotate.c \
			swap.c \
			rev_rotate.c \
			end.c \
			sort.c \
			get_lis.c \
			index_b.c \
			find_b_place.c \
			end_sort.c 

OBJ 	= 	${SRC:.c=.o}
BOBJ	=	${BSRC:.c=.o}

all: ${NAME}

bonus : $(NAME_BONUS)

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

${NAME_BONUS} : ${BOBJ}
	${CC} ${CFLAGS} ${BOBJ} -o ${NAME_BONUS}

%.o : %.c $(HEADER)
	${CC} ${CFLAGS} -c $< -o $@
	
clean :
	rm -f ${OBJ}
	rm -f ${BOBJ}

re: fclean all

fclean : clean
	rm -f ${NAME}
	rm -f ${NAME_BONUS}
	
.PHONY: all clean fclean re