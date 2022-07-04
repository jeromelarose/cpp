SRCS =	srcs/main.cpp

INCLUDES = includes/Array.hpp

OBJS	= $(SRCS:.cpp=.o)

NAME	=  array

CC	= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:	$(NAME) 

%.o: %.cpp $(INCLUDES)
	$(CC) -o $@ -c $< $(CFLAGS) -I$(dir $(INCLUDES))

$(NAME):	$(OBJS)
	$(CC) -o $@ $(^:.cpp=.o)

clean:
			rm -f  $(OBJS) $(OBJS_BONUS)

fclean:	clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re