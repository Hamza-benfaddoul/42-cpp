/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:10:20 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/31 14:56:59 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **argv)
{
	clock_t start, end;
	double cpu_time_used;

	if (ac <2 )
	{
		std::cout << "Usage: ./PmergeMe [numbers to sort]" << std::endl;
		return (1);
	}
	try
	{
		{
			PmergeMe<std::vector<int> > pm(ac, argv);
			
			std::cout << "Before: ";
			pm.printData();
			start = clock();
			pm.pmergeMe();
			end = clock();
			std::cout << "After:  ";
			pm.printData();
			cpu_time_used = (end - start);
			std::cout << "Time to process a range of " << ac - 1 
					  << " elements with std::vector<int> : " << std::fixed << (cpu_time_used / CLOCKS_PER_SEC) << " s" << std::endl;
		}
		{
			PmergeMe<std::deque<int> > pm(ac, argv);
			
			std::cout << "Before: ";
			pm.printData();
			start = clock();
			pm.pmergeMe();
			end = clock();
			std::cout << "After:  ";
			pm.printData();
			cpu_time_used = (end - start);
			std::cout << "Time to process a range of " << ac - 1 
					  << " elements with std::deque<int> : " << std::fixed << (cpu_time_used / CLOCKS_PER_SEC) << " s" << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}