# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 18:09:22 by thong-bi          #+#    #+#              #
#    Updated: 2022/12/07 14:29:01 by thong-bi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ft_*.c}
BSRCS	= ${wildcard ft_lst*.c}
OBJS	= ${SRCS:.c=.o}
BOBJS	= ${BSRCS:.c=.o}
INCS	= includes
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

# .c.o:
#  	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

$(NAME): ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: $(NAME) bonus

bonus: $(NAME) ${BOBJS}
		${LIBC} $(NAME) ${BOBJS}

clean:
	${RM} ${OBJS} ${BOBJS}

fclean: clean
	${RM} $(NAME)

re: fclean all
