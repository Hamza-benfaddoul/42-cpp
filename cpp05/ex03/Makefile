# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 14:45:42 by hbenfadd          #+#    #+#              #
#    Updated: 2023/10/12 16:31:00 by hbenfadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= ex03

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 

SRCS		= main.cpp Bureaucrat.cpp  RobotomyRequestForm.cpp AForm.cpp \
				PresidentialPardonForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS		= $(SRCS:.cpp=.o)
 
all: $(OBJS) 
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

clean:
	rm -f $(OBJS) *_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all
