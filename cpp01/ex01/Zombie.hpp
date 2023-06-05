/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:29:18 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/05 13:58:49 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
public:
    Zombie(); // default constructor
    ~Zombie(); // destructor
    void announce(void);
    void setName(std::string name);
private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif /* ZOMBIE_H */