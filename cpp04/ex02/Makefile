# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 11:15:42 by hbenfadd          #+#    #+#              #
#    Updated: 2023/07/28 19:04:04 by hbenfadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME			= brain

CXX				= c++
CXXFLAGS	=	-Wall -Wextra -Werror

SRCS			= main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp

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
