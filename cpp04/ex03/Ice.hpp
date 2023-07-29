/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:48:08 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/29 14:50:03 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &other);
        Ice(std::string const &type);
        Ice &operator=(Ice const &other);
        virtual ~Ice();
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif /* ICE_HPP*/
