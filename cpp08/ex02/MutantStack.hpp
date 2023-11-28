/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:16:52 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/11/27 16:16:17 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T, typename myContainer=std::deque<T> >
class MutantStack : public std::stack<T, myContainer>
{
	public:
		MutantStack() : std::stack<T, myContainer>(){}
		MutantStack(MutantStack const &other) : std::stack<T, myContainer>(other){}
		MutantStack &operator=(MutantStack const &other)
		{
			if (this != &other)
				std::stack<T, myContainer>::operator=(other);
			return (*this);
		}
		~MutantStack(){}

		typedef typename myContainer::iterator iterator;
		iterator begin() { return (std::stack<T, myContainer>::c.begin()); }
		iterator end() { return (std::stack<T, myContainer>::c.end()); }
};