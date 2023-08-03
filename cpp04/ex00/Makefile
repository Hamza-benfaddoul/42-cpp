# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 16:10:37 by hbenfadd          #+#    #+#              #
#    Updated: 2023/08/03 16:10:39 by hbenfadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= ex00

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
