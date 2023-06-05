/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:18:12 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/05 14:58:59 by hbenfadd         ###   ########.fr       */
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
        std::string const &getType(void);
        void setType(std::string type);
    private:
        std::string _type;
};

#endif /*WEAPON_HPP*/