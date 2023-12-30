/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:47:42 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/30 18:29:03 by hbenfadd         ###   ########.fr       */
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
			if (_stack.size() < 2)
			{
				std::cout << "Error: not enough numbers in stack" << std::endl;
				return ;
			}
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
				return ;
			}
		}
		else
		{
			try
			{
				nb = std::stoi(tmp);
			}
			catch (std::exception &e)
			{
				std::cout << "Error: invalid number" << std::endl;
				return ;
			}
			if (nb < 0 || nb > 9)
			{
				std::cout << "Error: invalid number" << std::endl;
				return ;
			}
			_stack.push(nb);
		}
	}
	if (_stack.size() != 1)
		std::cout << "Error: too many numbers in stack" << std::endl;
	else
		std::cout << _stack.top() << std::endl;
}

void 	RPN::add()
{
	int 	a;
	int 	b;

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

	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	_stack.push(b / a);
}

