SRCS= $(wildcard srcs/*.cpp)

OBJS	= $(SRCS:.cpp=.o)

NAME	= identify

CC	= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:		$(NAME) 

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS) -Iincludes

$(NAME):	$(OBJS)
	$(CC) -o $@ $(^:.cpp=.o)

clean:
			rm -f  $(OBJS) $(OBJS_BONUS)

fclean:	clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
