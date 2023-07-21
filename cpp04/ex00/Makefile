

NAME			= animal

CXX				= c++
CXXFLAGS	=	-Wall -Wextra -Werror

SRCS			= main.cpp Animal.cpp Dog.cpp Cat.cpp

OBJS			= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

run : all
	./$(NAME)
