# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 08:00:23 by hbenfadd          #+#    #+#              #
#    Updated: 2023/10/24 08:08:57by hbenfadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex02


CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp 
OBJCS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCS)
	$(CXX) $(CXXFLAGS)  $(OBJCS) -o $@
	
clean:
	rm -f $(OBJCS)
	
fclean: clean
	rm -f $(NAME)
re: flcean all

.PHONY: all clean flcean re