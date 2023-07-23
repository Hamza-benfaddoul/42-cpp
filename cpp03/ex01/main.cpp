/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:07:01 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/23 15:40:06 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav1;
	ScavTrap scav2("foo");
	scav1= scav2;

	scav1.attack("bar");
	scav1.guardGate();
	return 0;
} 
