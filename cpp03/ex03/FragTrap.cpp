/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:28:24 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/22 11:37:08 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap("Unknown")
{
	std::cout << "[ FragTrap ] --> Default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "[ FragTrap ] --> parametrize constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
	: ClapTrap()
{
	std::cout << "[ FragTrap ] --> copy constructor called" << std::endl;
	*this = other;
}
 
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "[ FragTrap ] --> destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "High Five Guys" << std::endl;
}
