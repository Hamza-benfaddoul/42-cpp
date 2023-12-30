/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 11:50:35 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/30 12:16:4by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
PmergeMe<Container>::PmergeMe(int ac, char **argv){

	for(int i = 1; i < ac; i++)
    {
        std::string av(argv[i]);
        if (av.find("-") != std::string::npos)
        {
            throw std::runtime_error("Invalid argument detected!");
        }
        for (int j = 0; j < (int)av.length();)
        {
            if (!std::isdigit(av[j++]))
                throw std::runtime_error("Invalid argument detected!");
        }
		_data.push_back(std::strtod(av.c_str(), NULL));
    } 
}

template <typename Container>
void	PmergeMe<Container>::pmergeMe() {
	devide();
	mergeSort(_bigNumbers, 0, _bigNumbers.size() - 1);
	insertSort();
	_data = _bigNumbers;
}

template <typename Container>
PmergeMe<Container>::~PmergeMe() {
	_data.clear();
	_bigNumbers.clear();
	_smallNumbers.clear();
}


template <typename Container>
void	PmergeMe<Container>::mergeSort(Container &bigNumbers, int start, int end)
{
    // devide to conquer.
    if (start >= end)
        return;
    int mid = start + (end - start) / 2;
    mergeSort(bigNumbers, start, mid);
    mergeSort(bigNumbers, mid + 1, end); 
    merge(bigNumbers, start, mid, end); 
}

template <typename Container>
void	PmergeMe<Container>::insertSort() {
	typename Container::iterator it;
    for (int i = 0; i < (int)_smallNumbers.size(); i++)
    {
        it = std::lower_bound(_bigNumbers.begin(), _bigNumbers.end(), _smallNumbers.at(i));
        if (it != _bigNumbers.end())
        {
            _bigNumbers.insert(it, _smallNumbers.at(i));
        }
    }
	
}

template <typename Container>
void	PmergeMe<Container>::printData() const {
	for(int i = 0; i < (int)_data.size(); i++)
		std::cout << (int)_data.at(i) << " ";
	std::cout << std::endl;
}


template <typename Container>
void	PmergeMe<Container>::devide() {
	
	for (int i = 0; i < (int)_data.size(); i = i + 2)
    {
        if (i + 1 < (int)_data.size() && _data.at(i) > _data.at(i + 1))
        {
            _bigNumbers.push_back(_data.at(i));
            _smallNumbers.push_back(_data.at(i + 1));
        }
        else if (i + 1 < (int)_data.size() && _data.at(i) < _data.at(i + 1))
        {
            _smallNumbers.push_back(_data.at(i));
            _bigNumbers.push_back(_data.at(i + 1));
        }
    }
    if (_data.size() % 2 != 0)
        _bigNumbers.push_back(_data.at(_data.size() - 1));
}


template <typename Container>
void PmergeMe<Container>::merge(Container &bigNumberes, int start, int mid, int end)	
{
	Container left, right;

    int left_size;
    int right_size;
    int k = start, i = 0, j = 0;

    left_size = mid - start + 1;
    right_size = end - mid;

    for (int i = 0; i < left_size; i++)
        left.push_back(bigNumberes.at(start + i));
    for (int i = 0; i < right_size; i++)
        right.push_back(bigNumberes.at(mid + 1 + i));
    
    for (; i < (int)left.size() && j < (int)right.size();)
    {
        if (left.at(i) < right.at(j))
            bigNumberes[k++] = left.at(i++);
        else
            bigNumberes[k++] = right.at(j++);
    }
    for (; i < (int)left.size(); i++)
        bigNumberes[k++] = left.at(i);
    for (; j < (int)right.size(); j++)
        bigNumberes[k++] = right.at(j);
}


template class PmergeMe<std::vector<int> >;
template class PmergeMe<std::deque<int> >;