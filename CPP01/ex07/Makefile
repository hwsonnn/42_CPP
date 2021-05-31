NAME = replace
CFLAG = -Wall -Wextra -Werror

SRCS = main.cpp
OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	clang++ $(CFLAG) -o $@ $(OBJS)

$(OBJS): $(SRCS)
	clang++ $(CFLAG) -c $(SRCS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)
	rm -rf *.replace

re : fclean all


.PONY : all clean fclean re
