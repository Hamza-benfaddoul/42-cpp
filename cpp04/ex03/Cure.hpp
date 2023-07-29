/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:57:44 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/29 14:58:26 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const &other);
        Cure(std::string const &type);
        Cure &operator=(Cure const &other);
        virtual ~Cure();
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif /* CURE_H */
