/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:36:18 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/16 15:17:58 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	std::string str;

	i = 0;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout<<std::endl;
		return (EXIT_SUCCESS);
	}
	while(++i < ac)
	{
		j = -1;
		while(av[++j])
			std::cout << (char)toupper(av[j]);
	}
	std::cout<<std::endl;
	return (EXIT_SUCCESS);
}
