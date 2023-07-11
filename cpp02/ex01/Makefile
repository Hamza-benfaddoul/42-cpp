# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 15:42:55 by hbenfadd          #+#    #+#              #
#    Updated: 2023/07/11 08:28:23 by hbenfadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = ./a.out
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(Name)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(Name)

re: fclean all
