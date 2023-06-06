# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 18:25:38 by hbenfadd          #+#    #+#              #
#    Updated: 2023/06/05 13:07:48 by hbenfadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98


SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all