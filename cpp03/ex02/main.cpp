/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:07:01 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/23 16:07:52 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag;
	FragTrap frag1(frag);
	FragTrap frag2 = frag1;
	frag2.attack("frag1");
	frag1.takeDamage(20);
	frag1.beRepaired(10);
	frag1.highFivesGuys();
	return (0);
}
