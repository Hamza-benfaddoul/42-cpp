/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:47:42 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/31 13:50:22 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN() { return ; }

RPN::~RPN() { return ; }


void 	RPN::calculate(std::string str)
{
	std::istringstream iss(str);
	std::string 			tmp;
	int 					nb;

	while (iss >> tmp)
	{
		if (tmp.length() == 1 && !isdigit(tmp[0]))
		{
			if (tmp[0] == '+')
				add();
			else if (tmp[0] == '-')
				sub();
			else if (tmp[0] == '*')
				mul();
			else if (tmp[0] == '/')
				div();
			else
			{
				std::cout << "Error: invalid operator" << std::endl;
				exit(1);
			}
		}
		else
		{
			char *end;
			nb = std::strtod(tmp.c_str(), &end);
			if (*end)
			{
					std::cout << "Error: invalid number" << std::endl;
					exit(1);
			}
			if (nb < 0 || nb > 9)
			{
				std::cout << "Error: invalid number" << std::endl;
				exit(1);
			}
			_stack.push(nb);
		}
	}
	if (_stack.size() != 1)
	{
		std::cout << "Error: too many numbers in stack" << std::endl;
		exit(1);
	}
	std::cout << _stack.top() << std::endl;
}

void 	RPN::add()
{
	int 	a;
	int 	b;

	if (_stack.size() < 2)
	{
		std::cout << "Error: not enough numbers in stack" << std::endl;
		exit(1);
	}
	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	_stack.push(a + b);
}

void 	RPN::sub()
{
	int 	a;
	int 	b;

	if (_stack.size() < 2)
	{
		std::cout << "Error: not enough numbers in stack" << std::endl;
		exit(1);
	}
	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	_stack.push(b - a);
}

void 	RPN::mul()
{
	int 	a;
	int 	b;

	if (_stack.size() < 2)
	{
		std::cout << "Error: not enough numbers in stack" << std::endl;
		exit(1);
	}
	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	_stack.push(a * b);
}

void 	RPN::div()
{
	int 	a;
	int 	b;

	if (_stack.size() < 2)
	{
		std::cout << "Error: not enough numbers in stack" << std::endl;
		exit(1);
	}
	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	if (a == 0)
	{
		std::cout << "Error: division by zero" << std::endl;
		exit(1);
	}
	_stack.push(b / a);
}

