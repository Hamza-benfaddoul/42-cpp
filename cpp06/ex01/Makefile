# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 10:43:55 by hbenfadd          #+#    #+#              #
#    Updated: 2023/10/16 10:45:48 by hbenfadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex01

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp Serializer.cpp

OBJS		= $(SRCS:.cpp=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)
re:			fclean all

.PHONY:		all clean fclean re