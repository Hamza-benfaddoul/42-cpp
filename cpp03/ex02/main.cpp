/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:07:01 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/21 21:19:09 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag("frooog");
	FragTrap frag1(frag);
	FragTrap frag2 = frag1;
}
