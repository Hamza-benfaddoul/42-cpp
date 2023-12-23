/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:42:01 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/23 14:47:33 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <sstream>

class RPN
{
	private:
		std::stack<int>		_stack;

		RPN(RPN const &src);
		RPN &operator=(RPN const &src);
	public:
		RPN();
		~RPN();

		void 	calculate(std::string str);
		void 	add();
		void 	sub();
		void 	mul();
		void 	div();
};