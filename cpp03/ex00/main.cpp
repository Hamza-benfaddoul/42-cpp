/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:07:01 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/15 17:08:42 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Clap");
	ClapTrap clap2("Clap2");

	clap.attack("Clap2");
	clap2.takeDamage(10);
	clap2.attack("Clap");
	clap.takeDamage(1);
	clap.attack("Clap2");
	clap2.takeDamage(1);
	clap2.attack("Clap");
	clap.takeDamage(1);
	clap.attack("Clap2");
	clap2.takeDamage(1);
	clap2.attack("Clap");
	clap.takeDamage(1);
	clap.attack("Clap2");
	clap2.takeDamage(1);
	clap2.attack("Clap");
	clap.takeDamage(1);
	clap.attack("Clap2");
	clap2.takeDamage(1);
	clap2.attack("Clap");
	clap.takeDamage(1);
	clap.attack("Clap2");
	clap2.takeDamage(1);
	clap2.attack("Clap");
	clap.takeDamage(1);
	clap.attack("Clap2");
	clap2.takeDamage(1);
	clap2.attack("Clap");
	clap.takeDamage(1);
	clap.attack("Clap2");
	clap2.takeDamage(1);
	clap2.attack("Clap");
	clap.takeDamage(1);
}