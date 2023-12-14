# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 12:33:26 by hbenfadd          #+#    #+#              #
#    Updated: 2023/12/14 15:36:48 by hbenfadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bitcoin

CXX		= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp BitcoinExchange.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
