/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:13:53 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/30 12:46:19 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>

template <typename Container>
class PmergeMe
{
	private:
		PmergeMe();
		PmergeMe(PmergeMe const &other);
		PmergeMe &operator=(PmergeMe const &other);

		void devide();

		void merge(Container &bigNumbers, int start, int mid, int end);
		void mergeSort(Container &bigNumbers, int start, int end);

		void insertSort();
	public:
		PmergeMe(int ac, char **argv);
		~PmergeMe();
		
		void pmergeMe();
		void printData() const;

	private:
		Container _data;
		Container _bigNumbers;
		Container _smallNumbers;
};