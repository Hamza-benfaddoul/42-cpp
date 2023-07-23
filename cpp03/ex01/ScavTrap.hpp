/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:28:24 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/23 13:09:48 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
public:
	ScavTrap();
    ScavTrap(std::string name);
	ScavTrap(const ScavTrap&);
    ScavTrap& operator=(const ScavTrap&);
    ~ScavTrap();
    void attack(const std::string& target);
	void guardGate();
};

#endif /* SCAVTRAP_H */
