# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 17:09:36 by hbenfadd          #+#    #+#              #
#    Updated: 2023/07/18 11:40:07 by hbenfadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= frag

CXX		= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp ClapTrap.cpp FragTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
