/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:40:59 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/21 22:16:16 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	:_name("Unknown")
{
	std::cout << "[ DiamondTrap ] --> Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: _name(name), ClapTrap(),  ScavTrap(), FragTrap()
{
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "[ DiamondTrap ] --> parameterize constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(),  ScavTrap(), FragTrap()
{
	std::cout << "[ DiamondTrap ] --> copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "[ DiamondTrap ] --> copy assignment operator called" << std::endl;
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[ DiamondTrap ] --> Destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << ClapTrap::_name << std::endl;
}
