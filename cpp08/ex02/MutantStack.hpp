/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:16:52 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/11/21 10:17:32 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>(){}
		MutantStack(MutantStack const &other) : std::stack<T>(other){}
		MutantStack &operator=(MutantStack const &other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return (*this);
		}
		~MutantStack(){}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return (std::stack<T>::c.begin()); }
		iterator end() { return (std::stack<T>::c.end()); }
};