/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:18:12 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/06 15:25:35 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon();
        void setType(std::string type);
        std::string const &getType(void);
    private:
        std::string _type;
};

#endif /*WEAPON_HPP*/