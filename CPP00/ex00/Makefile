NAME = megaphone
CFLAG = -Wall -Wextra -Werror

SRCS = megaphone.cpp
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

re : fclean all

run : all
	./megaphone

.PONY : all clean fclean run
