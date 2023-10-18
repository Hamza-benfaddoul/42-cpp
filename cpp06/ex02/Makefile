# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 14:42:38 by hbenfadd          #+#    #+#              #
#    Updated: 2023/10/16 14:44:43 by hbenfadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= ex02

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Base.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
