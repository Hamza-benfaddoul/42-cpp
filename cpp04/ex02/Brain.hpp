/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:16:05 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/27 11:19:14 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain
{
    public:
        Brain();
        Brain(Brain const &other);
        Brain &operator=(Brain const &other);
        ~Brain();
    private:
        std::string ideas[100];
};

#endif
