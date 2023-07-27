/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:28:24 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/18 11:37:51 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap();
    FragTrap(std::string name);
	FragTrap(const FragTrap&);
    FragTrap& operator=(const FragTrap&);
    ~FragTrap();
	void highFivesGuys(void);
};

#endif /* FRAGTRAP_H */
