# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/28 09:14:41 by jelarose          #+#    #+#              #
#    Updated: 2020/11/28 09:14:45 by jelarose         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=  	srcs/megaphone.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= megaphone

CC	= clang++

CFLAGS	= -Wall -Wextra -Werror

all:		$(NAME) 

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f  $(OBJS) $(OBJS_BONUS)

fclean:	clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
